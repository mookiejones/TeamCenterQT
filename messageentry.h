#ifndef MESSAGEENTRY_H
#define MESSAGEENTRY_H

#include <QObject>
#include <QDateTime>
class MessageEntry : public QObject
{
    Q_OBJECT
    Q_PROPERTY(Level level READ level WRITE setLevel NOTIFY levelChanged)
    Q_PROPERTY(QString title READ title WRITE setTitle NOTIFY titleChanged)
    Q_PROPERTY(QString message READ message WRITE setMessage NOTIFY messageChanged)
    Q_PROPERTY(QDateTime time READ time WRITE setTime NOTIFY timeChanged)
    Q_ENUMS(Level)

public:
    enum Level{
        Info=1,
        Debug=2,
        Warning=3,
        Exception=4
    };



    MessageEntry(QObject *parent = 0){

        //m_level=Level::Debug;
        m_time=QDateTime::currentDateTime();
//        QDateTime *now = QDateTime::currentDateTime();
//        m_date = now->ToString("HH:mm");
    }

    void setTitle(QString title){
        m_title=title;
    }

    void setMessage(QString message){
        m_message = message;
    }

    void setLevel(Level level){
        m_level=level;
    }


    void setTime(QDateTime time){
        m_time=time;
    }

    Level level() const{return m_level;}
    QString title() const{return m_title;}
    QString message() const{return m_message;}
    QDateTime time() const{return m_time;}


private:
    Level m_level;
    QString m_title;
    QString m_message;
    QDateTime m_time;

signals:
    void levelChanged(Level);
    void titleChanged(QString);
    void messageChanged(QString);
    void timeChanged(QString);
public slots:
};

#endif // MESSAGEENTRY_H
