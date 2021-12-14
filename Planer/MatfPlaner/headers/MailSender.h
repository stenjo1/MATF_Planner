#ifndef MAILSENDER_H
#define MAILSENDER_H

#include <iostream>
#include <QString>
#include <QMessageBox>
#include <QDir>


class MailSender : public QObject
{
    Q_OBJECT

public:
    ~MailSender();
    CURLcode send(QString& recipient);


};

#endif // MAILSENDER_H
