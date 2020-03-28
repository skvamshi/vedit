#include "vedit.h"
#include "ui_vedit.h"

Vedit::Vedit(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Vedit)
{
    ui->setupUi(this);
}

Vedit::~Vedit()
{
    delete ui;
}

