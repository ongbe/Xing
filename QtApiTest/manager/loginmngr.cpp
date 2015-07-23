#include "loginmngr.h"
#include "util/log.h"
LoginMngr::LoginMngr(QObject *parent) : QObject(parent),mErrorMsg("None")
{
}

LoginMngr::~LoginMngr()
{

}

bool LoginMngr::requestLogin(const QString &id, const QString &passwd, bool toDemoServer)
{
    connect(&mSession, SIGNAL(onLogin(QString,QString)), this, SLOT(onLogin(QString,QString)));
    if(mSession.Init()) {
        if(mSession.ConnectServer(toDemoServer)) {
            mSession.Login(id, passwd, "", 0, false);
            return true;
        } else {
            mErrorMsg = mSession.GetErrorMessage(mSession.GetLastError());
        }
    }else {
            mErrorMsg = mSession.GetErrorMessage(mSession.GetLastError());
    }
    qCWarning(loginMngr)<<mErrorMsg;
    return false;
}

QString LoginMngr::getLastErrorMsg()
{
    return mErrorMsg;
}

void LoginMngr::onLogin(const QString &szCode, const QString &szMsg)
{
    emit notifyLogin(szCode, szMsg);
}
