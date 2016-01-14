#ifndef MESSAGELIST_H
#define MESSAGELIST_H

#include <QTableView>
#include <QStandardItemModel>
#include "message.h"
#include "messagelistmodel.h"
class MessageList:public QWidget
{
    Q_OBJECT
public:
    MessageList(QWidget *parent=0);
    void addMessage(Message message);
    void addMessage(QString title,QString message);

    void initializeModel();

private :
    QTableView *tableView;


    MessageListModel *model;

};

#endif // MESSAGELIST_H
