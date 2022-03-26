#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "mythread.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
     MyThread *mThread;

private slots:
     void on_pushButton_clicked();

     void on_pushButton_2_clicked();

     void on_label_linkActivated(const QString &link);

private:
    Ui::MainWindow *ui;

public slots:
    void onNumberChanged(int);

};
#endif // MAINWINDOW_H
