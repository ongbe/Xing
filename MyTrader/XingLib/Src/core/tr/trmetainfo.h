#ifndef TRMETAINFO_H
#define TRMETAINFO_H
#include <QString>
#include <QMap>
#include <QList>
#include <QTextStream>
#define FIELD_KOR_NAME_INDEX 0
#define FIELD_ENG_NAME_INDEX 2
#define FIELD_DATA_TYPE_INDEX 3
#define FIELD_DATA_LENGTH_INDEX 4

#define TR_RES_PATH "c:/eBEST/xingAPI/Res"
class TrFieldInfo
{
public:
    static TrFieldInfo *parse(const QString& trimmedLine);
    ~TrFieldInfo();

    typedef enum {CHAR, LONG, LONGLONG, FLOAT, TIME, DATE, NONE } DATA_TYPE;

    QString getKorName();
    QString getEngName();
    DATA_TYPE getDataType();
    float getLength();
    QString toString();
private:
    static DATA_TYPE getType(const QString& hname, const QString& type, int dataSize);
    TrFieldInfo(const QString& korName, const QString& engName, DATA_TYPE type, float length);
    QString mKorName;
    QString mEngName;
    DATA_TYPE mType;
    float mLength;
};
class TrBlockInfo
{
public:
    TrBlockInfo(const QString& blockName);
    ~TrBlockInfo();
    TrFieldInfo *getField(const QString& fieldName);
    QList<QString> getFieldNameList();
    QString getBlockName();
    void addField(TrFieldInfo* field);
    QString toString();
private:
    QMap<QString, TrFieldInfo*> mFieldMap;
    QString mBlockName;
};

class TrMetaInfo
{
public:
    TrMetaInfo(const QString& trName);
    ~TrMetaInfo();
    bool hasOutBlock1();
    TrBlockInfo *getInBlock();
    TrBlockInfo *getOutBlock();
    TrBlockInfo *getOutBlock1();
    QString toString();
private:
    void readTrRes();
    bool isInBlock(const QString &line);
    bool isOutBlock(const QString &line);
    bool isOutBlock1(const QString &line);
    void processInBlock(QTextStream &in);
    void processOutBlock(QTextStream &in);
    void processOutBlock1(QTextStream &in);
private:
    QString mTrName;
    QString mTitle;
    TrBlockInfo* mInBlock;
    TrBlockInfo* mOutBlock;
    TrBlockInfo* mOutBlock1;
};

#endif // TRMETAINFO_H
