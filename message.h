#include <QString>
#include <QDateTime>
#ifndef MESSAGE_H
#define MESSAGE_H

class Message{

public:
    Message(QString title,QString message);
    QString getTitle() const;
    QString getMessage() const;
    QString getDate() const;

private:
    QString m_title;
    QString m_message;
    QString m_date;
};

#endif // MESSAGE_H
