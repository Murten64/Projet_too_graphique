#include "gestionnaire.h"
#include "ui_gestionnaire.h"

Gestionnaire::Gestionnaire(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Gestionnaire)
{
    ui->setupUi(this);
}

Gestionnaire::~Gestionnaire()
{
    delete ui;
}
