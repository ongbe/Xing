#ifndef LOGINMNGR_H
#define LOGINMNGR_H

#include <QObject>
#include <QThread>
#include "XingLib/xasession.h"
class LoginMngr : public QObject
{
    Q_OBJECT
public:
    explicit LoginMngr(QObject *parent = 0);
    ~LoginMngr();
    bool requestLogin(const QString &id, const QString &passwd, bool toDemoServer);
    QString getLastErrorMsg();
signals:
    void notifyLogin(const QString &szCode, const QString &szMsg);
public slots:
    void onLogin(const QString &szCode, const QString &szMsg);
private:
    XASession mSession;
    QString mErrorMsg;
};

#endif // LOGINMNGR_H