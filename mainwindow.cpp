#include "mainwindow.h"
#include "ui_mainwindow.h"



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->m_webview->load(QUrl("http://0.0.0.0:8000/"));
//    ui->m_webview->load(QUrl::fromLocalFile("/home/azensy/Desktop/apk/demo-v3/test.html"));
    webChannel = new QWebChannel;
    Dinn_net * webobj = new Dinn_net();
//    webChannel->registerObjects("webobj",webobj);
    webChannel->registerObject("webobj",webobj);
    ui->m_webview->page()->setWebChannel(webChannel);
//    ui->m_webview->load(QUrl::fromLocalFile("/home/azensy/Desktop/apk/demo-v3/test.html"));

//    webobj->jscallme();


}




MainWindow::~MainWindow()
{
    delete ui;
}
