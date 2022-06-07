#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->label->setStyleSheet("background: blacK ");
    ui->label->setMovie(movie);

    connect(ui->pushButton, SIGNAL(clicked()), movie, SLOT(start()));
    connect(ui->pushButton_2, SIGNAL(clicked()), movie, SLOT(stop()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

