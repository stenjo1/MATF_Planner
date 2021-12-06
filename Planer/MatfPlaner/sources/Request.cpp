#include "headers/Request.h"

Request::Request(QObject *parent) : QObject(parent)
{
}

Request::~Request(){}

void Request::download(QString s_url)
{
    manager = new QNetworkAccessManager(this);

    connect(manager, &QNetworkAccessManager::finished, this, [=](QNetworkReply* reply){
        if(reply->error())
            {
                qDebug() << reply->errorString();
            }
        else
            {
                QDir dir("../MatfPlaner/resources");
                QString path = dir.absolutePath();

                //mozda je efikasnije sa regexom
                QString urlName = s_url;
                int startPos = urlName.indexOf('/') + 1;
                int endPos = urlName.lastIndexOf('.');
                int length = endPos - startPos;
                urlName =  urlName.mid(startPos, length) + ".txt";

                QString filename = path + "/" + urlName;
                QFile *file = new QFile(filename);

                if(file->exists()){
                    if(file->open(QFile::ReadOnly))
                    {
                        QByteArray ba = reply->readAll();
                        if (file->readAll() == ba){
                            _fileChanged = false;
                        } else {
                            _fileChanged = true;
                        }
                     }else{
                         qDebug()<<file->errorString();
                     }
                    delete file;
                }
                else{
                    if(file->open(QFile::Append))
                    {
                        file->write(reply->readAll());
                        file->flush();
                        file->close();
                     }else{
                         qDebug()<<file->errorString();
                     }
                    _fileChanged = false;
                    delete file;
                }
            }

            reply->deleteLater();
        }
    );

    QUrl url = QUrl(s_url);
    QNetworkRequest request(url);
    auto* reply = manager->get(request);

    //synchronized reply
    QEventLoop loop;
    connect(reply, SIGNAL(finished()), &loop, SLOT(quit()));
    loop.exec();

}

bool Request::isFileChanged()
{
    return _fileChanged;
}


