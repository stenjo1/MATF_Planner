#ifndef MAILSENDER_H
#define MAILSENDER_H

#include <QDir>
#include <QMessageBox>
#include <QString>
#include <curl.h>
#include <iostream>


class MailSender : public QObject
{
    Q_OBJECT

  public:
    ~MailSender();
    CURLcode send(QString &recipient);
};

#endif // MAILSENDER_H
