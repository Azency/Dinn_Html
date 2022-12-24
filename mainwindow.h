#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWebChannel>
#include <QWebEngineView>
#include "lwesample.pb.h"
#include "qtnn_v1.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QWebEngineView *webView = nullptr;
    QWebChannel *webChannel = nullptr;
};

#endif // MAINWINDOW_H
