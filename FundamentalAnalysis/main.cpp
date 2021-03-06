#include "mainwindow.h"
#include "ui/logindialog.h"
#include <QApplication>
#include "xing/xaquery.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QCoreApplication::setOrganizationName("foxbear");
    QCoreApplication::setApplicationName("FundamentalAnalysis");

    LoginDialog dialog;
    MainWindow w;
    if(dialog.exec()==QDialog::Accepted) {
        w.show();
    }

    return a.exec();
}
