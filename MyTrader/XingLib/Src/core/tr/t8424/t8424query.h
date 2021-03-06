#ifndef T8424QUERY_H
#define T8424QUERY_H

#include <QObject>
#include "core/tr/blocktrquery.h"
#include "core/tr/t8424/t8424item.h"
#include "common/type/commontype.h"
class T8424Query : public BlockTrQuery
{
    Q_OBJECT
    Q_PROPERTY(QString gubun1 MEMBER _gubun READ gubun WRITE setGubun)
public:
    ~T8424Query();
    static T8424Query *createQuery(MARKET_TYPE upType=ALL, QObject *parent = 0);

    void setGubun(const QString& gubun) {_gubun1 = gubun;}
    QString gubun() { return _gubun1; }

protected:
    explicit T8424Query(QObject *parent = 0);
    virtual T8424Item *createItem() override;

private:
    QString _gubun1;
};

#endif // T8424QUERY_H
