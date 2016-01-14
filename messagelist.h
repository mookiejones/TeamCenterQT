#ifndef MESSAGELIST_H
#define MESSAGELIST_H

#include <QTableView>
#include <QStandardItemModel>
#include "message.h"
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

    QStandardItemModel *model;
};

#endif // MESSAGELIST_H

// MessageList
#ifndef MESSAGE_MODEL_H
#define MESSAGE_MODEL_H
#include "message.h"
class MessageModel:public QAbstractListModel{
    Q_OBJECT
public:
    MessageModel(QObject *parent=0)
    :QAbstractListModel(parent){}

    int rowCount(const QModelIndex &parent = QModelIndex()) const;
        QVariant data(const QModelIndex &index, int role) const;

        QVariant headerData(int section, Qt::Orientation orientation,int role = Qt::DisplayRole) const;

        Qt::ItemFlags flags(const QModelIndex &index) const;
           bool setData(const QModelIndex &index, const QVariant &value,int role = Qt::EditRole);

           bool insertRows(int position, int rows, const QModelIndex &index = QModelIndex());
           bool removeRows(int position, int rows, const QModelIndex &index = QModelIndex());
private:
           QList<Message *> messages;
};

#endif

