#ifndef VISITWEBSITEDIALOG_H
#define VISITWEBSITEDIALOG_H

#include <QDialog>

namespace Ui {
class VisitWebsiteDialog;
}

class VisitWebsiteDialog : public QDialog
{
    Q_OBJECT

public:
    explicit VisitWebsiteDialog(QWidget *parent = nullptr);
    ~VisitWebsiteDialog();

private slots:
    void on_lineEdit_returnPressed();

private:
    Ui::VisitWebsiteDialog *ui;
};

#endif // VISITWEBSITEDIALOG_H
