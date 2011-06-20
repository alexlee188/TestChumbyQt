#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(push_me()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::push_me()
{
    ui->statusBar->showMessage(tr("Button 1 Pushed"));
}

void MainWindow::on_pushButton_2_clicked()
{
     ui->statusBar->showMessage(tr("Button 2 Pushed"));
}
