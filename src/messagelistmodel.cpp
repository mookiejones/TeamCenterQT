#include "messagelistmodel.h"

#include "message.h"
#include "messageentry.h"

QVariant MessageListModel::data(const QModelIndex &index, int role) const
{
    qDebug()<<" Data asked for "<<index.row()<<" and role "<<role;
       if (index.row()<0 || index.row()>=m_vpMessages.size())
       {
           return QVariant();
       }

       // should be unreachable code
       return QVariant();
}

/*!
    Returns the number of items in the string list as the number of rows
    in the model.
*/

int MessageListModel::rowCount(const QModelIndex &parent) const
{
    return m_vpMessages.count();

}


/*!
    Returns an appropriate value for the item's flags. Valid items are
    enabled, selectable, and editable.
*/


Qt::ItemFlags MessageListModel::flags(const QModelIndex &index) const
{
    if (!index.isValid())
        return Qt::ItemIsEnabled;

    return QAbstractItemModel::flags(index) | Qt::ItemIsEditable;
}



/*!
    Removes a number of rows from the model at the specified position.
*/


bool MessageListModel::removeRows(int position, int rows, const QModelIndex &parent)
{
    beginRemoveRows(QModelIndex(), position, position+rows-1);

    for (int row = 0; row < rows; ++row) {
      //  stringList.removeAt(position);
    }

    endRemoveRows();
    return true;

}


/*!
    Inserts a number of rows into the model at the specified position.
*/


bool MessageListModel::insertRows(int position, int rows, const QModelIndex &parent)
{
    beginInsertRows(QModelIndex(), position, position+rows-1);

    for (int row = 0; row < rows; ++row) {
//        stringList.insert(position, "");
    }

    endInsertRows();
    return true;

}



/*!
    Returns the appropriate header string depending on the orientation of
    the header and the section. If anything other than the display role is
    requested, we return an invalid variant.
*/


QVariant MessageListModel::headerData(int section, Qt::Orientation orientation,
                                     int role) const
{
    if (role != Qt::DisplayRole)
        return QVariant();

    if (orientation == Qt::Horizontal)
        return QString("Column %1").arg(section);
    else
        return QString("Row %1").arg(section);
}




void MessageListModel::AddMessage(int level, QString title, QString message){
    beginInsertRows(QModelIndex(),rowCount(),rowCount());

    MessageEntry* m = new MessageEntry();
    m->setMessage(message);

    m->setTitle(title);
    m_vpMessages.append(m);



  //  m_vpMessages << objectCreated;
    endInsertRows();
}

