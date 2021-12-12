#include "headers/MailSender.h"

MailSender::~MailSender(){}

CURLcode MailSender::send(QString& recipient)
{

    const QStringList emailContent{tr("To: <%1>").arg(recipient),
                                      "From: <matf.planer@gmail.com> Matf-Planer",
                                      "Subject: Raspored ispita",
                                      nullptr};

       CURL *curl;
       CURLcode res = CURLE_OK;

       //ovo mora da se prvo pozove i vraca hendler koji se koristi dole u funkcijama
       curl = curl_easy_init();

       if (curl) {
           struct curl_slist *headers = nullptr;
           struct curl_slist *recipients = nullptr;
           struct curl_slist *slist = nullptr;
           curl_mime *mime;
           curl_mime *alt;
           curl_mimepart *part;

          /* //citanje sifre iz fajla
           QString path = QDir("..").absoluteFilePath("sifra.txt");
           QFile file(path);
           file.open(QIODevice::ReadOnly | QIODevice::Text);
           auto password = file.readAll();
           file.close();*/


           //posiljalac, sifra i server se podesavaju
           curl_easy_setopt(curl, CURLOPT_VERBOSE, 1L);
           curl_easy_setopt(curl, CURLOPT_USERNAME, "matf.planer@gmail.com");
           curl_easy_setopt(curl, CURLOPT_PASSWORD, "mh32zf5XGhgwvCW");
           curl_easy_setopt(curl, CURLOPT_URL, "smtps://smtp.gmail.com");

           #ifdef SKIP_PEER_VERIFICATION
               curl_easy_setopt(curl, CURLOPT_SSL_VERIFYPEER, 0L);
           #endif

           #ifdef SKIP_HOSTNAME_VERIFICATION
               curl_easy_setopt(curl, CURLOPT_SSL_VERIFYHOST, 0L);
           #endif

           curl_easy_setopt(curl, CURLOPT_MAIL_FROM, "<matf.planer@gmail.com>");

           //ovde dodajemo primaoca
           recipients = curl_slist_append(recipients, recipient.toStdString().c_str());
           curl_easy_setopt(curl, CURLOPT_MAIL_RCPT, recipients);

           //dodajemo u strukturu headers delove mejla koji se salje
           for (auto &con: emailContent)
               headers = curl_slist_append(headers, con.toStdString().c_str());

           curl_easy_setopt(curl, CURLOPT_HTTPHEADER, headers);

           //inicijalizuje se poruka
           mime = curl_mime_init(curl);
           alt = curl_mime_init(curl);

           //dodaje se tekst poruke
           QString message = "U prilogu je raspored ispita:";
           part = curl_mime_addpart(alt);
           curl_mime_data(part, message.toStdString().c_str(), CURL_ZERO_TERMINATED);
           part = curl_mime_addpart(mime);
           curl_mime_subparts(part, alt);
           curl_mime_type(part, "multipart/alternative");
           slist = curl_slist_append(nullptr, "Content-Disposition: inline");
           curl_mime_headers(part, slist, 1);
           curl_easy_setopt(curl, CURLOPT_MIMEPOST, mime);


           //dodaje se attachment
           part = curl_mime_addpart(mime);
           curl_mime_encoder(part, "base64");
           QString path =QDir("../MatfPlaner/resources").absoluteFilePath("Raspored");
           curl_mime_filedata(part, path.toStdString().c_str());
           curl_easy_setopt(curl, CURLOPT_MIMEPOST, mime);


           //salje se poruka i kupi se rezultat
           res = curl_easy_perform(curl);

           //oslobadjaju se strukture i raskida konekcija
           curl_slist_free_all(recipients);
           curl_slist_free_all(headers);
           curl_easy_cleanup(curl);

           //oslobadja se poruka koja je poslata
           curl_mime_free(mime);
       }


       return res;



}
