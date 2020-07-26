#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "infoprojectwindow.h"
#include "task1.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_action_Info_triggered()
{
    InfoProjectWindow infowindow;
    infowindow.setModal(true);
    infowindow.exec();
}

void MainWindow::on_pbOpenTask01_clicked()
{
    Task1 task1window;
    task1window.setModal(true);
    task1window.exec();
}

void MainWindow::on_pbOpenTask2_clicked()
{

}
