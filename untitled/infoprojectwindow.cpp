#include "infoprojectwindow.h"
#include "ui_infoprojectwindow.h"

InfoProjectWindow::InfoProjectWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InfoProjectWindow)
{
    ui->setupUi(this);
}

InfoProjectWindow::~InfoProjectWindow()
{
    delete ui;
}
