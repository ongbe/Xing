﻿#ifndef STOCKINFOUPDATER_H
#define STOCKINFOUPDATER_H

#include <QWidget>
#include <QMap>
#include <QtSql/QSqlQuery>
#include <QDate>
#include "core/query/querymngr.h"
#include "core/tr/t8430/t8430query.h"
#include "core/tr/t1102/t1102query.h"
#include "core/tr/t1516/t1516query.h"
#include "common/type/stockinfo.h"
class StockInfoUpdater : public QObject
{
    Q_OBJECT
public:
    explicit StockInfoUpdater(QueryMngr *queryMngr,QObject *parent = 0);
    ~StockInfoUpdater();
	bool isUpdating();
signals:
    void updateStockInfoDone();
public slots:
    void updateStockInfo();
    void t8430QueryDone();			//주식종목조회
    void t1102QueryDone();			//주식현재가조회
private:
    void createStockInfoTable();
    void saveStockInfoToDB(StockInfo *info);
    void errorQuery(QSqlQuery *query);
    bool checkCondition(StockInfo *info);
private:
    QueryMngr* mQueryMngr;
    QMap<QString, StockInfo *> mStockInfoUpdatingMap;
    const QDate ZeroDate;
};

#endif // STOCKINFOUPDATER_H
