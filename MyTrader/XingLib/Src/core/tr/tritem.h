#ifndef TRITEM_H
#define TRITEM_H

#include <QObject>
#include <QString>
#include <QMap>
#include <QList>
#define TO_STRING_AUX( x )  #x
#define TO_STRING( x )      TO_STRING_AUX( x )

#define DEFINE_PROPERTY_NAME(name, prop) addItemProperty(qkor(name), prop)

class QSqlQuery;
class TrItem : public QObject
{
    Q_OBJECT
public:
    explicit TrItem(QObject *parent = 0);
    ~TrItem();

    virtual QList<QString> getPropertyList();
    QList<QString> getPropertyNameList();
    QString getPropertyByName(const QString &name);
    virtual QString toString();
    void setPropertyFromQuery(QSqlQuery *query);
protected:
    QString qkor(const char *strKor);
    void addItemProperty(QString name, QString property);
    virtual QString makeSqlInsertQuery(const QString &tableName);
    virtual QString makeSqlUpdateQuery(const QString &tableName, const QString &where);
private:
    QMap<QString,QString> mPropertyNameMap;
    QList<QString> mPropertyNameList;

signals:

public slots:
};

#endif // TRITEM_H
