#ifndef INFOPROJECTWINDOW_H
#define INFOPROJECTWINDOW_H

#include <QDialog>

namespace Ui {
class InfoProjectWindow;
}

class InfoProjectWindow : public QDialog
{
    Q_OBJECT

public:
    explicit InfoProjectWindow(QWidget *parent = nullptr);
    ~InfoProjectWindow();

private:
    Ui::InfoProjectWindow *ui;
};

#endif // INFOPROJECTWINDOW_H
