#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include "messagelist.h"
class QAction;
class QListWidget;
class QMenu;
class QTextEdit;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow();

    static QString getUserName(){
        QString name = qgetenv("USER");
        if (name.isEmpty())
            name = qgetenv("USERNAME");
        return name;
    }

    static QString userName;
private slots:
    void newLetter();
    void save();
    void print();
    void undo();
    void about();
    void insertCustomer(const QString &customer);
    void addParagraph(const QString &paragraph);

    void login();
    void logout();
    void deleteItems();
private:

    void createActions();
    void createMenus();
    void createToolBars();
    void createStatusBar();
    void createDockWindows();

    void createCommands();
    QTextEdit *textEdit;
    QListWidget *customerList;
    QListWidget *paragraphsList;

    MessageList *messages;
    QMenu *fileMenu;
    QMenu *editMenu;
    QMenu *viewMenu;
    QMenu *helpMenu;
    QToolBar *fileToolBar;
    QToolBar *editToolBar;
    QToolBar *commandBar;
    QAction *newLetterAct;
    QAction *saveAct;
    QAction *printAct;
    QAction *undoAct;
    QAction *aboutAct;
    QAction *aboutQtAct;
    QAction *quitAct;

    QAction *loginAction;
    QAction *logoutAction;
    QAction *deleteAction;
};

#endif
