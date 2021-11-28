#include "headers/Utils.h"

Utils::Utils()
{

}

QDate Utils::fromQStringtoQDate(QString string){
    QDate date;
    if(string.contains('/')){
        date.fromString(string,"dd/MM/YYYY");
    }else if(string.contains('.')){
        date.fromString(string,"dd.MM.YYYY");
    }else if(string.contains('-')){
        date.fromString(string,"dd-MM-YYYY");
    } else {
        //exception handling
    }

    return date;
}
