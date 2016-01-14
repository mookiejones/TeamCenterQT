#include "message.h"
#include <QDebug>
Message::Message(QString title,QString message){
m_title=title;
m_message=message;

QDateTime now =QDateTime::currentDateTime();
m_date = now.toString("HH:mm");
qDebug()<<m_date;
}

