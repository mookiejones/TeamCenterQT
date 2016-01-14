#ifndef MESSAGELISTMODEL_H
#define MESSAGELISTMODEL_H
#include <QDebug>
#include "messageentry.h"
#include <QAbstractListModel>
#include <QHash>
class MessageListModel:public QAbstractListModel
{
    Q_OBJECT
public:
    MessageListModel(QObject *parent=0)
        :QAbstractListModel(parent){};





//    virtual ~MessageListModel();

    void AddMessage(int level,QString title,QString message);


    // pure virtuals implementations
           QVariant                data(const QModelIndex &index, int role = Qt::DisplayRole) const;
          int rowCount(const QModelIndex &parent = QModelIndex()) const;

           QVariant     headerData(int section, Qt::Orientation orientation, int role=Qt::DisplayRole) const;
           Qt::ItemFlags flags(const QModelIndex &index) const;

           bool insertRows(int position, int rows, const QModelIndex &index = QModelIndex());
              bool removeRows(int position, int rows, const QModelIndex &index = QModelIndex());
//           QModelIndex             index(int row, int column, const QModelIndex &parent = QModelIndex()) const;
  //         QModelIndex             parent(const QModelIndex &child) const ;



private:
 QList<MessageEntry*> m_vpMessages;
};

#endif // MESSAGELISTMODEL_H
