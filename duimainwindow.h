#ifndef DUIMAINWINDOW_H
#define DUIMAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class DuiMainWindow;
}

class DuiMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit DuiMainWindow(QWidget *parent = 0);
    ~DuiMainWindow();

private:
    Ui::DuiMainWindow *ui;
};

#endif // DUIMAINWINDOW_H
