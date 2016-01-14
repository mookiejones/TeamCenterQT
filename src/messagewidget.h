#ifndef MESSAGEWIDGET_H
#define MESSAGEWIDGET_H

#include <QObject>
#include <QWidget>
#include <QTableView>
#include <QStandardItemModel>
#include "messagelistmodel.h"
class MessageWidget : public QWidget
{
    Q_OBJECT
public:
    explicit MessageWidget(QWidget *parent = 0);
    void AddMessage(QString title,QString message);
private:
    QTableView *tableView;
    MessageListModel *model;


signals:

public slots:


};

#endif // MESSAGEWIDGET_H
