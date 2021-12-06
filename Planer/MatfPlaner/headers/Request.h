#ifndef REQUEST_H
#define REQUEST_H

#include <QObject>
#include <QIODevice>
#include <QUrl>
#include <QFile>
#include <QDir>
#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkRequest>
#include <QtNetwork/QNetworkReply>
#include <QEventLoop>

class Request : public QObject
{
    Q_OBJECT
public:
    explicit Request(QObject *parent = 0);
    virtual ~Request();
    void download(QString s_url);
    bool isFileChanged();

private:
  QNetworkAccessManager* manager;
  bool _fileChanged;


};

#endif // REQUEST_H
