#include "mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    sleep_time = 2000;
    QTimer *my_timer = new QTimer();
    timer = my_timer;
    timer->setInterval(sleep_time);
    timer->start();
    connect(timer, SIGNAL(timeout()), this, SLOT(onTimeout()));
    start_lock = true;
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_2_clicked()//开始
{
    start_lock = false;
    if(ui->lineEdit_2->text()==NULL)
        QMessageBox::about(this,tr("错误信息"),tr("未输入内容"));
    else{
        QFile file(ui->lineEdit_2->text());
        file.open(QIODevice::ReadOnly | QIODevice::Text);
        while(!file.atEnd()){
            QString str = file.readLine();
            std::string std_string = str.toStdString();
            if(std_string.find(' ')!=-1){
                int location = std_string.find(' ');
                int x = std::atoi(std_string.substr(0,location).c_str());
                int y = std::atoi(std_string.substr(location+1,std_string.size()-location-1).c_str());
                MainWindow::temp_vector.push_back(std::make_pair(x,y));
            }
            else{
                SizeofBox = std::atoi(std_string.c_str());
                cell = Cell_automat(SizeofBox);
                ui->lineEdit->setText(QString::fromStdString(std_string));
            }
        }
        cell.init(temp_vector);
    }
}

void MainWindow::on_pushButton_clicked()//退出
{
    close();
}

void MainWindow::on_horizontalSlider_valueChanged(int value)//移动滑块
{
    sleep_time = 2000/value;
    timer->setInterval(sleep_time);
}

void MainWindow::on_pushButton_3_clicked()
{
    start_lock = !start_lock;
}

void MainWindow::onTimeout(){
    if(start_lock==false){
        std::string out_string = "";
        std::vector<std::vector<bool>> output = cell.update();
        for(int i = 1;i < SizeofBox + 1;i++){
            for(int j = 1;j < SizeofBox + 1;j++){
                if(output[i][j]==false)
                    out_string += " ";
                else
                    out_string += "*";
                if(j == SizeofBox)
                    out_string += "\n";
            }
        }
        ui->textBrowser->setText(QString::fromStdString(out_string));
    }
}
