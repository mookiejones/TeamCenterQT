#include "messagewidget.h"
#include <QHBoxLayout>
MessageWidget::MessageWidget(QWidget *parent) : QWidget(parent)
{

    QHBoxLayout *mainLayout = new QHBoxLayout;
    tableView = new QTableView(this);
    model = new MessageListModel(this);
    tableView->setModel(model);
    mainLayout->addWidget(tableView);
    setLayout(mainLayout);

}

void MessageWidget::AddMessage(QString title, QString message){
    model->AddMessage(MessageEntry::Debug,"title","message");

}
