#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButtonMyButtonQuit_clicked();

    void on_pushButtonSetLabelText_clicked();

    void on_pushButtonClear_clicked();



private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
