#ifndef TASK2_H
#define TASK2_H

#include <QDialog>
#include <QTextEdit>
#include <cmath>

namespace Ui {
class Task2;
}

class Task2 : public QDialog
{
    Q_OBJECT

public:
    explicit Task2(QWidget *parent = nullptr);
    ~Task2();

private slots:
    void on_pbGetBA_clicked();

private:
    Ui::Task2 *ui;
};

#endif // TASK2_H
