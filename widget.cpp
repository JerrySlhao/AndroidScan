#include "widget.h"
#include "ui_widget.h"
#include "QZXing.h"
#include <QString>
#include <QImage>
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    ui->scan->setGeometry(0, 0, this->width(), this->height()-50 );
}

Widget::~Widget()
{
    delete ui;
}

