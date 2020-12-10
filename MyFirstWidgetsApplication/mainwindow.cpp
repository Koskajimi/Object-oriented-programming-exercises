#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)//,
   // ui(new Ui::MainWindow)
{
    ui = new Ui::MainWindow;
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
    ui = nullptr;
}

void MainWindow::on_pushButtonMyButtonQuit_clicked()
{
    this -> close();
}

void MainWindow::on_pushButtonSetLabelText_clicked()
{
   // ui ->labelMyLabel->setText("Hello");
    QString myText;
   myText = ui ->lineEditMyLineEdit ->text();
    ui ->labelMyLabel ->setText(myText);

}

void MainWindow::on_pushButtonClear_clicked()
{
    ui -> labelMyLabel->clear();
}

