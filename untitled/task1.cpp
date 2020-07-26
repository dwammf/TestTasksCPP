#include "task1.h"
#include "ui_task1.h"

#define ByteSwap(x)  ( (x & 0xff) << 8 | ( (x & 0xff00) >> 8 ) )
#define IsPowerOf2(x) (x != 0) && (x & (x-1)) == 0

Task1::Task1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Task1)
{
    ui->setupUi(this);
}

Task1::~Task1()
{
    delete ui;
}

void Task1::on_pbByteSwap_clicked()
{
    QString data = ui->teInput->toPlainText();
    bool ok;
    uint16_t number = data.toUInt(&ok, 10);
    //TODO: check if number >= 2^16
    ui->teOutput->setText(ok ? QString::number(ByteSwap(number)) : "Please, insert  positive integer");

}

void Task1::on_pbPower2_clicked()
{
    QString data = ui->teInput->toPlainText();
    bool ok;
    uint64_t number = data.toUInt(&ok, 10);
    //TODO: check if number >= 2^16
    if (!ok) ui->teOutput->setText("Please, insert positive integer");
    else ui->teOutput->setText(IsPowerOf2(number) ? QString::number(log2(number)) : "Not power of 2");
}
