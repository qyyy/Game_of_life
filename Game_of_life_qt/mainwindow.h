#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "ui_mainwindow.h"
#include "QMouseEvent"
#include "cell_automat.h"
#include <QMessageBox>
#include <QMainWindow>
#include <QFile>
#include <QDebug>
#include <QTextCodec>
#include <QTime>
#include <QTimer>
#include <windows.h>
#include <vector>
#include <string>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void onTimeout();

private slots:

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_horizontalSlider_valueChanged(int value);

    void on_pushButton_3_clicked();

    //void onTimeout();

private:
    Ui::MainWindow *ui;
    std::vector<std::pair<int,int>> temp_vector;
    int sleep_time;
    QTimer *timer;
    bool start_lock;
    Cell_automat cell;
    int SizeofBox;
};

#endif // MAINWINDOW_H
