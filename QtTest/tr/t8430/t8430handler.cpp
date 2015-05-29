#include "t8430handler.h"
T8430Handler::T8430Handler(QObject *parent) : TrHandler(parent)
{

}

T8430Handler::~T8430Handler()
{

}

int T8430Handler::sendRequest(TrQuery* trQuery)
{
    T8430Query* query = static_cast<T8430Query*>(trQuery);
    t8430InBlock pckInBlock;
    memset(&pckInBlock, ' ', sizeof(pckInBlock));

    switch(query->getMode()) {
    case T8430Query::ALL:
        memcpy(pckInBlock.gubun, "0", sizeof(pckInBlock.gubun));
        break;
    case T8430Query::KOSPI:
        memcpy(pckInBlock.gubun, "1", sizeof(pckInBlock.gubun));
        break;
    case T8430Query::KOSDAQ:
        memcpy(pckInBlock.gubun, "2", sizeof(pckInBlock.gubun));
        break;
    }

    return IXingAPI::GetInstance()->Request(query->getHWnd(), NAME_t8430, &pckInBlock, sizeof(pckInBlock), FALSE, " ", -1);
}

T8430Query *T8430Handler::getQuery(int reqId)
{
    return static_cast<T8430Query*>(mQueryMap.value(reqId));
}

void T8430Handler::dataReceived(LPRECV_PACKET packet)
{
    LPt8430OutBlock pOutBlock;
    QList<T8430Item*> itemList;
    T8430Query* query = getQuery(packet->nRqID);
    int numOfItem = packet->nDataLength/sizeof(t8430OutBlock);
    for(int i = 0; i<numOfItem; i++) {
        T8430Item* item = new T8430Item(query);
        pOutBlock = (LPt8430OutBlock)(packet->lpData + (sizeof(t8430OutBlock) * i)); //데이터를 가져오기 위한 Block을 설장한다.
        item->setHName(QString::fromLocal8Bit(pOutBlock->hname,sizeof(pOutBlock->hname)));
        item->setShcode(QString::fromLocal8Bit(pOutBlock->shcode,sizeof(pOutBlock->shcode)));
        item->setExpcode(QString::fromLocal8Bit(pOutBlock->expcode,sizeof(pOutBlock->expcode)));
        if(!strcmp("1", pOutBlock->etfgubun)){
            item->setAsETF(true);
        } else {
            item->setAsETF(false);
        }
        item->setUplmtprice(getLongFromField(pOutBlock->uplmtprice, 8));
        item->setDnlmtprice(getLongFromField(pOutBlock->dnlmtprice, 8));
        item->setJniclose(getLongFromField(pOutBlock->jnilclose, 8));
        item->setMemedan(QString::fromLocal8Bit(pOutBlock->memedan, sizeof(pOutBlock->memedan)));
        item->setRecprice(getLongFromField(pOutBlock->recprice, 8));
        if(!strcmp("1", pOutBlock->gubun)){
            item->setAsKOSPI(true);
        } else {
            item->setAsKOSPI(false);
        }
        itemList.push_back(item);
    }

    emit query->workDone(itemList);

}

void T8430Handler::messageReceived(LPMSG_PACKET packet)
{
    if(mQueryMap.contains(packet->nRqID)) {
        QString msg("messageReceived");
        QString appendMsg;

        printLog(msg.append(QString::fromLocal8Bit((const char *)packet->lpszMessageData)));

        T8430Query* query = getQuery(packet->nRqID);
        query->messageReceived(QString::fromLocal8Bit((const char *)packet->lpszMessageData));

        IXingAPI::GetInstance()->ReleaseMessageData((LPARAM)packet);
    }
}

void T8430Handler::errorReceived(LPMSG_PACKET packet)
{
    if(mQueryMap.contains(packet->nRqID)) {
        QString msg("errorReceived");
        printLog(msg.append(QString::fromLocal8Bit((const char *)packet->lpszMessageData)));

        T8430Query* query = getQuery(packet->nRqID);
        query->errorReceived(QString::fromLocal8Bit((const char *)packet->lpszMessageData));

        IXingAPI::GetInstance()->ReleaseMessageData((LPARAM)packet);
    }
}

void T8430Handler::releaseReceived(int reqId)
{
    if(mQueryMap.contains(reqId)) {
        T8430Query* query = getQuery(reqId);
        mQueryMap.remove(reqId);
        query->deleteLater();
        IXingAPI::GetInstance()->ReleaseRequestData(reqId);
    }
}
