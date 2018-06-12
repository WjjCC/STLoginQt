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
    void Init();
private:
    Ui::DuiMainWindow *ui;
    //QVBoxLayout* mlvgLayout;
};

#endif // DUIMAINWINDOW_H
