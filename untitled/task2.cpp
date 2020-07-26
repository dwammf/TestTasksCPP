#include "task2.h"
#include "ui_task2.h"

#define findBroadcastAddress(ipv4, subnetMask)  ipv4|(~subnetMask)

Task2::Task2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Task2)
{
    ui->setupUi(this);
}

Task2::~Task2()
{
    delete ui;
}

bool maskRightCheck(uint32_t mask);

void Task2::on_pbGetBA_clicked()
{
    QString ipv4String = ui->teipv4->toPlainText();
    QString subnetMaskString = ui->teSubnetMask->toPlainText();
    bool ok1, ok2;
    uint32_t ipv4 = ipv4String.toUInt(&ok1, 10);
    uint32_t subnetMask = subnetMaskString.toUInt(&ok2, 10);
    if (!ok1 || !ok2) {
        ui->teBroadcastAddress->setText("Input Error: Need to Enter Unsigned Integer");
        return;
    }
    if (maskRightCheck(subnetMask))
        ui->teBroadcastAddress->setText(QString::number(findBroadcastAddress(ipv4, subnetMask)));
    else ui->teBroadcastAddress->setText("Input Error");
}

bool maskRightCheck(uint32_t mask){
    uint32_t notMask = ~mask;
    uint32_t pow2 = 1;
    while (notMask) {
        if (notMask & pow2) {
            notMask -= pow2;
            pow2 *= 2;
        }
        else return false;
    }
    return true;
}
