#include "headingcontrol.h"
#include "./ui_headingcontrol.h"

HeadingControl::HeadingControl(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::HeadingControl)
{
    ui->setupUi(this);
}

HeadingControl::~HeadingControl()
{
    delete ui;
}

