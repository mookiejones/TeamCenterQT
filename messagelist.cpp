#include "messagelist.h"
#include <QVBoxLayout>
#include <QHBoxLayout>
MessageList::MessageList(QWidget *parent):
    QWidget(parent)
{

    tableView = new QTableView(this);

    QHBoxLayout *mainLayout = new QHBoxLayout;

    mainLayout->addWidget(tableView);
    setLayout(mainLayout);
    // Create a new model
        // QStandardItemModel(int rows, int columns, QObject * parent = 0)
    initializeModel();
}

void MessageList::addMessage(Message message){


    int rows=model->rowCount();



}

void MessageList::initializeModel(){
    model = new QStandardItemModel(4,2,this);
    tableView->setModel(model);



   model->setHeaderData(0,Qt::Horizontal,QObject::tr("ID"));
   model->setHeaderData(1,Qt::Horizontal,QObject::tr("jdj"));

model->setHeaderData(2,Qt::Horizontal,QObject::tr(""));

    // Generate basic data
    // Generate data
       for(int row = 0; row < 4; row++)
       {
           for(int col = 0; col < 2; col++)
           {
               QModelIndex index = model->index(row,col,QModelIndex());
               // 0 for all data
               model->setData(index,0);
           }
       }
/*    model->setTable("person");
       model->setEditStrategy(QSqlTableModel::OnManualSubmit);
       model->select();

       model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
       model->setHeaderData(1, Qt::Horizontal, QObject::tr("First name"));
       model->setHeaderData(2, Qt::Horizontal, QObject::tr("Last name"));
       */
}

