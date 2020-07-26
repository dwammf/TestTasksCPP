#ifndef TASK1_H
#define TASK1_H

#include <QDialog>
#include <QTextEdit>
#include <cmath>

namespace Ui {
class Task1;
}

class Task1 : public QDialog
{
    Q_OBJECT

public:
    explicit Task1(QWidget *parent = nullptr);
    ~Task1();

private slots:
    void on_pbByteSwap_clicked();

    void on_pbPower2_clicked();

private:
    Ui::Task1 *ui;
};

#endif // TASK1_H
