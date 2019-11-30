#ifndef MANAGECENTER_H
#define MANAGECENTER_H

#include <QWidget>
#include "bookm.h"
#include "QCloseEvent"
#include "admininfo.h"
#include "readerm.h"

namespace Ui {
class ManageCenter;
}

class ManageCenter : public QWidget
{
    Q_OBJECT

public:
    explicit ManageCenter(QWidget *parent = nullptr);
    ~ManageCenter();
    void closeEvent(QCloseEvent *event);
private slots:
    void on_btn_book_clicked(); 

    void on_btn_logout_clicked();

    void on_btn_personal_clicked();

private slots:
    void receiveAdmin(Admin);

    void on_btn_reader_clicked();

private:
    Ui::ManageCenter *ui;
    Admin loger;
    BookM *bm;
    AdminInfo *ai;
    ReaderM *rm;
};

#endif // MANAGECENTER_H
