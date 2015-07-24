#include "stockinfo.h"

StockInfo::StockInfo(QObject *parent):TrItem(parent)
{
    DEFINE_PROPERTY_NAME("종목명", "hname");
    DEFINE_PROPERTY_NAME("단축코드", "shcode");
    DEFINE_PROPERTY_NAME("현재가","price");
    DEFINE_PROPERTY_NAME("전일대비구분","sign");
    DEFINE_PROPERTY_NAME("전일대비","change");
    DEFINE_PROPERTY_NAME("등락율","diff");
    DEFINE_PROPERTY_NAME("누적거래량","volume");
    DEFINE_PROPERTY_NAME("기준가","recprice");
    DEFINE_PROPERTY_NAME("가중평균","avg");
    DEFINE_PROPERTY_NAME("상한가","uplmtprice");
    DEFINE_PROPERTY_NAME("하한가","dnlmtprice");
    DEFINE_PROPERTY_NAME("전일거래량","jnilvolume");
    DEFINE_PROPERTY_NAME("거래량차","volumediff");
    DEFINE_PROPERTY_NAME("시가","open");
    DEFINE_PROPERTY_NAME("시가시간","opentime");
    DEFINE_PROPERTY_NAME("고가","high");
    DEFINE_PROPERTY_NAME("고가시간","hightime");
    DEFINE_PROPERTY_NAME("저가","low");
    DEFINE_PROPERTY_NAME("저가시간","lowtime");
    DEFINE_PROPERTY_NAME("52최고가","high52w");
    DEFINE_PROPERTY_NAME("52최고가일","high52wdate");
    DEFINE_PROPERTY_NAME("52최저가","low52w");
    DEFINE_PROPERTY_NAME("52최저가일","low52wdate");
    DEFINE_PROPERTY_NAME("소진율","exhratio");
    DEFINE_PROPERTY_NAME("PER","per");
    DEFINE_PROPERTY_NAME("PBRX","pbrx");
    DEFINE_PROPERTY_NAME("상장주식수","listing");
    DEFINE_PROPERTY_NAME("증거금율","jkrate");
    DEFINE_PROPERTY_NAME("수량단위","memedan");
    DEFINE_PROPERTY_NAME("매도증권사코드1","offernocd1");
    DEFINE_PROPERTY_NAME("매수증권사코드1","bidnocd1");
    DEFINE_PROPERTY_NAME("매도증권사명1","offerno1");
    DEFINE_PROPERTY_NAME("매수증권사명1","bidno1");
    DEFINE_PROPERTY_NAME("총매도수량1","dvol1");
    DEFINE_PROPERTY_NAME("총매수수량1","svol1");
    DEFINE_PROPERTY_NAME("매도증감1","dcha1");
    DEFINE_PROPERTY_NAME("매수증감1","scha1");
    DEFINE_PROPERTY_NAME("매도비율1","ddiff1");
    DEFINE_PROPERTY_NAME("매수비율1","sdiff1");
    DEFINE_PROPERTY_NAME("매도증권사코드2","offernocd2");
    DEFINE_PROPERTY_NAME("매수증권사코드2","bidnocd2");
    DEFINE_PROPERTY_NAME("매도증권사명2","offerno2");
    DEFINE_PROPERTY_NAME("매수증권사명2","bidno2");
    DEFINE_PROPERTY_NAME("총매도수량2","dvol2");
    DEFINE_PROPERTY_NAME("총매수수량2","svol2");
    DEFINE_PROPERTY_NAME("매도증감2","dcha2");
    DEFINE_PROPERTY_NAME("매수증감2","scha2");
    DEFINE_PROPERTY_NAME("매도비율2","ddiff2");
    DEFINE_PROPERTY_NAME("매수비율2","sdiff2");
    DEFINE_PROPERTY_NAME("매도증권사코드3","offernocd3");
    DEFINE_PROPERTY_NAME("매수증권사코드3","bidnocd3");
    DEFINE_PROPERTY_NAME("매도증권사명3","offerno3");
    DEFINE_PROPERTY_NAME("매수증권사명3","bidno3");
    DEFINE_PROPERTY_NAME("총매도수량3","dvol3");
    DEFINE_PROPERTY_NAME("총매수수량3","svol3");
    DEFINE_PROPERTY_NAME("매도증감3","dcha3");
    DEFINE_PROPERTY_NAME("매수증감3","scha3");
    DEFINE_PROPERTY_NAME("매도비율3","ddiff3");
    DEFINE_PROPERTY_NAME("매수비율3","sdiff3");
    DEFINE_PROPERTY_NAME("매도증권사코드4","offernocd4");
    DEFINE_PROPERTY_NAME("매수증권사코드4","bidnocd4");
    DEFINE_PROPERTY_NAME("매도증권사명4","offerno4");
    DEFINE_PROPERTY_NAME("매수증권사명4","bidno4");
    DEFINE_PROPERTY_NAME("총매도수량4","dvol4");
    DEFINE_PROPERTY_NAME("총매수수량4","svol4");
    DEFINE_PROPERTY_NAME("매도증감4","dcha4");
    DEFINE_PROPERTY_NAME("매수증감4","scha4");
    DEFINE_PROPERTY_NAME("매도비율4","ddiff4");
    DEFINE_PROPERTY_NAME("매수비율4","sdiff4");
    DEFINE_PROPERTY_NAME("매도증권사코드5","offernocd5");
    DEFINE_PROPERTY_NAME("매수증권사코드5","bidnocd5");
    DEFINE_PROPERTY_NAME("매도증권사명5","offerno5");
    DEFINE_PROPERTY_NAME("매수증권사명5","bidno5");
    DEFINE_PROPERTY_NAME("총매도수량5","dvol5");
    DEFINE_PROPERTY_NAME("총매수수량5","svol5");
    DEFINE_PROPERTY_NAME("매도증감5","dcha5");
    DEFINE_PROPERTY_NAME("매수증감5","scha5");
    DEFINE_PROPERTY_NAME("매도비율5","ddiff5");
    DEFINE_PROPERTY_NAME("매수비율5","sdiff5");
    DEFINE_PROPERTY_NAME("외국계매도합계수량","fwdvl");
    DEFINE_PROPERTY_NAME("외국계매도직전대비","ftradmdcha");
    DEFINE_PROPERTY_NAME("외국계매도비율","ftradmddiff");
    DEFINE_PROPERTY_NAME("외국계매수합계수량","fwsvl");
    DEFINE_PROPERTY_NAME("외국계매수직전대비","ftradmscha");
    DEFINE_PROPERTY_NAME("외국계매수비율","ftradmsdiff");
    DEFINE_PROPERTY_NAME("회전율","vol");
    DEFINE_PROPERTY_NAME("단축코드","shcode");
    DEFINE_PROPERTY_NAME("누적거래대금","value");
    DEFINE_PROPERTY_NAME("전일동시간거래량","jvolume");
    DEFINE_PROPERTY_NAME("연중최고가","highyear");
    DEFINE_PROPERTY_NAME("연중최고일자","highyeardate");
    DEFINE_PROPERTY_NAME("연중최저가","lowyear");
    DEFINE_PROPERTY_NAME("연중최저일자","lowyeardate");
    DEFINE_PROPERTY_NAME("목표가","target");
    DEFINE_PROPERTY_NAME("자본금","capital");
    DEFINE_PROPERTY_NAME("유동주식수","abscnt");
    DEFINE_PROPERTY_NAME("액면가","parprice");
    DEFINE_PROPERTY_NAME("결산월","gsmm");
    DEFINE_PROPERTY_NAME("대용가","subprice");
    DEFINE_PROPERTY_NAME("시가총액","total");
    DEFINE_PROPERTY_NAME("상장일","listdate");
    DEFINE_PROPERTY_NAME("전분기명","name");
    DEFINE_PROPERTY_NAME("전분기매출액","bfsales");
    DEFINE_PROPERTY_NAME("전분기영업이익","bfoperatingincome");
    DEFINE_PROPERTY_NAME("전분기경상이익","bfordinaryincome");
    DEFINE_PROPERTY_NAME("전분기순이익","bfnetincome");
    DEFINE_PROPERTY_NAME("전분기EPS","bfeps");
    DEFINE_PROPERTY_NAME("전전분기명","name2");
    DEFINE_PROPERTY_NAME("전전분기매출액","bfsales2");
    DEFINE_PROPERTY_NAME("전전분기영업이익","bfoperatingincome2");
    DEFINE_PROPERTY_NAME("전전분기경상이익","bfordinaryincome2");
    DEFINE_PROPERTY_NAME("전전분기순이익","bfnetincome2");
    DEFINE_PROPERTY_NAME("전전분기EPS","bfeps2");
    DEFINE_PROPERTY_NAME("전년대비매출액","salert");
    DEFINE_PROPERTY_NAME("전년대비영업이익","opert");
    DEFINE_PROPERTY_NAME("전년대비경상이익","ordrt");
    DEFINE_PROPERTY_NAME("전년대비순이익","netrt");
    DEFINE_PROPERTY_NAME("전년대비EPS","epsrt");
    DEFINE_PROPERTY_NAME("락구분","info1");
    DEFINE_PROPERTY_NAME("관리/급등구분","info2");
    DEFINE_PROPERTY_NAME("정지/연장구분","info3");
    DEFINE_PROPERTY_NAME("투자/불성실구분","info4");
    DEFINE_PROPERTY_NAME("장구분","janginfo");
    DEFINE_PROPERTY_NAME("T.PER","t_per");
    DEFINE_PROPERTY_NAME("통화ISO코드","tonghwa");
    DEFINE_PROPERTY_NAME("총매도대금1","dval1");
    DEFINE_PROPERTY_NAME("총매수대금1","sval1");
    DEFINE_PROPERTY_NAME("총매도대금2","dval2");
    DEFINE_PROPERTY_NAME("총매수대금2","sval2");
    DEFINE_PROPERTY_NAME("총매도대금3","dval3");
    DEFINE_PROPERTY_NAME("총매수대금3","sval3");
    DEFINE_PROPERTY_NAME("총매도대금4","dval4");
    DEFINE_PROPERTY_NAME("총매수대금4","sval4");
    DEFINE_PROPERTY_NAME("총매도대금5","dval5");
    DEFINE_PROPERTY_NAME("총매수대금5","sval5");
    DEFINE_PROPERTY_NAME("총매도평단가1","davg1");
    DEFINE_PROPERTY_NAME("총매수평단가1","savg1");
    DEFINE_PROPERTY_NAME("총매도평단가2","davg2");
    DEFINE_PROPERTY_NAME("총매수평단가2","savg2");
    DEFINE_PROPERTY_NAME("총매도평단가3","davg3");
    DEFINE_PROPERTY_NAME("총매수평단가3","savg3");
    DEFINE_PROPERTY_NAME("총매도평단가4","davg4");
    DEFINE_PROPERTY_NAME("총매수평단가4","savg4");
    DEFINE_PROPERTY_NAME("총매도평단가5","davg5");
    DEFINE_PROPERTY_NAME("총매수평단가5","savg5");
    DEFINE_PROPERTY_NAME("외국계매도대금","ftradmdval");
    DEFINE_PROPERTY_NAME("외국계매수대금","ftradmsval");
    DEFINE_PROPERTY_NAME("외국계매도평단가","ftradmdvag");
    DEFINE_PROPERTY_NAME("외국계매수평단가","ftradmsvag");
    DEFINE_PROPERTY_NAME("투자주의환기","info5");
    DEFINE_PROPERTY_NAME("기업인수목적회사여부","spac_gubun");
    DEFINE_PROPERTY_NAME("발행가격","issueprice");
    DEFINE_PROPERTY_NAME("배분적용구분코드","alloc_gubun");
    DEFINE_PROPERTY_NAME("배분적용구분","alloc_text");
    DEFINE_PROPERTY_NAME("단기과열/VI발동","shterm_text");
}

StockInfo::~StockInfo()
{

}

