#include "headers/Request.h"

Request::Request(QObject *parent) : QObject(parent) {}

Request::~Request()
{
    delete manager;
}

void Request::download(QString s_url)
{
    manager = new QNetworkAccessManager(this);

    connect(manager, &QNetworkAccessManager::finished, this, [=](QNetworkReply *reply) {
        if (reply->error()) {
            qDebug() << reply->errorString();
        } else {
            QDir dir("../MatfPlaner/output");
            QString path = dir.absolutePath();

            // mozda je efikasnije sa regexom
            // ime mu je od poslednjeg / do .
            // ako je poslednji / bas poslednji karakter
            // onda krecemo od pretposlednjeg /
            QString urlName = s_url;
            int urlLength   = urlName.length();
            int startPos    = urlName.lastIndexOf('/') + 1;
            if (startPos == urlLength) {
                urlName  = urlName.remove(urlLength - 1, 1);
                startPos = urlName.lastIndexOf('/') + 1;
            }
            int endPos = urlName.lastIndexOf('.');
            int length = endPos - startPos;
            urlName    = urlName.mid(startPos, length) + ".txt";

            QString filename = path + "/" + urlName;
            QFile *file      = new QFile(filename);

            // mozda ovaj deo moze pametnije nmg sad
            if (file->exists()) {
                if (file->open(QFile::ReadWrite)) {
                    QByteArray ba = reply->readAll();
                    if (file->readAll() == ba) {
                        _fileChanged = false;
                    } else {
                        // nisam sigurna
                        file->resize(0);
                        file->write(ba);
                        _fileChanged = true;
                    }
                    file->flush();
                    file->close();
                } else {
                    qDebug() << file->errorString();
                }
                delete file;
            } else {
                if (file->open(QFile::Append)) {
                    file->write(reply->readAll());
                    file->flush();
                    file->close();
                } else {
                    qDebug() << file->errorString();
                }
                _fileChanged = false;
                delete file;
            }
        }

        reply->deleteLater();
    });

    QUrl url = QUrl(s_url);
    if (url.isValid()) {
        QNetworkRequest request(url);
        auto *reply = manager->get(request);

        // synchronized reply
        QEventLoop loop;
        connect(reply, SIGNAL(finished()), &loop, SLOT(quit()));
        loop.exec();
    } else {
        qDebug() << "REQUEST::DOWNLOAD::INVALID URL: " << s_url;
        _fileChanged = false;
    }
}

bool Request::isFileChanged()
{
    return _fileChanged;
}
