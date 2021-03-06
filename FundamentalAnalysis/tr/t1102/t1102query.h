#ifndef T1102QUERY_H
#define T1102QUERY_H

#include "tr/trquery.h"
#include "tr/t1102/t1102item.h"
#include <QObject>

class T1102Query : public TrQuery
{
    Q_OBJECT
public:
    ~T1102Query();

    static T1102Query *createQuery(const QWidget* requester, const QString& shcode, QObject *parent=0);

protected:
    explicit T1102Query(HWND winId, const QString& shcode, QObject *parent=0);

public:
    QString getShcode();
signals:
    void workDone(T1102Item* item);
private:
    QString mShcode;
};

#endif // T1102QUERY_H
