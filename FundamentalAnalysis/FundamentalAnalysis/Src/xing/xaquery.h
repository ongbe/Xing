#ifndef XAQUERY_H
#define XAQUERY_H

#include <QObject>
#include <QMap>
#include <QThread>
#include "xing/IXingAPI.h"
#include "tr/trquery.h"
#include "tr/TrHandler.h"
class TrHandler;

class XAQueryMngr : public QThread
{
    Q_OBJECT
public:
    explicit XAQueryMngr(QObject *parent=0);
    ~XAQueryMngr();

private:
    QMap<QString,TrHandler*> mHandlerMap;

public slots:
    void requestQuery(TrQuery* query);
    void handleResponse(WPARAM wparam, LPARAM lparam);
};

#endif // XAQUERY_H
