#ifndef MAILSENDER_H
#define MAILSENDER_H

#include <iostream>
#include <QString>
#include <QMessageBox>
#include <QDir>
#include <curl.h>


class MailSender : public QObject
{
    Q_OBJECT

public:
    ~MailSender();
    CURLcode send(QString& recipient);


};

#endif // MAILSENDER_H
