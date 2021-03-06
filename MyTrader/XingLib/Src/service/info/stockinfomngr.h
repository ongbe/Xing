#ifndef STOCKINFOMNGR_H
#define STOCKINFOMNGR_H

#include <QObject>
#include "common/type/stockinfo.h"
#include <QMap>
class QSqlQuery;
class StockInfoMngr : public QObject
{
    Q_OBJECT
public:
    static StockInfoMngr *getInstance();
    ~StockInfoMngr();
    QList<QString> getShcodeList();
    StockInfo *getStockInfo(const QString& shcode);
signals:

public slots:
private:
    explicit StockInfoMngr(QObject *parent = 0);
    void errorQuery(QSqlQuery *query);

private:
    QMap<QString, StockInfo* > mStockInfoMap;
    QList<QString> mShcodeList;
    static StockInfoMngr *sInstance;
};

#endif // STOCKINFOMNGR_H
