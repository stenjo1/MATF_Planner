#ifndef REQUEST_H
#define REQUEST_H

#include <QDir>
#include <QEventLoop>
#include <QFile>
#include <QIODevice>
#include <QObject>
#include <QUrl>
#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkReply>
#include <QtNetwork/QNetworkRequest>

class Request : public QObject
{
    Q_OBJECT
  public:
    explicit Request(QObject *parent = 0);
    virtual ~Request();
    void download(QString s_url);
    bool isFileChanged();

  private:
    QNetworkAccessManager *manager;
    bool _fileChanged;
};

#endif // REQUEST_H
