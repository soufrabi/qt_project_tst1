#include "visitwebsitedialog.h"
#include "ui_visitwebsitedialog.h"
// #include <QUrl>
VisitWebsiteDialog::VisitWebsiteDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::VisitWebsiteDialog)
{
    ui->setupUi(this);
    ui->webEngineView->load(QUrl("https://duckduckgo.com"));
}

VisitWebsiteDialog::~VisitWebsiteDialog()
{
    delete ui;
}

void VisitWebsiteDialog::on_lineEdit_returnPressed()
{
    QString search_term = ui->lineEdit->text();
    ui->webEngineView->load(search_term);

}

