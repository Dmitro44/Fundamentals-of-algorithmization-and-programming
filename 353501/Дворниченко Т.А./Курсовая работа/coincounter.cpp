#include "coincounter.h"
#include <QFont>
#include<QFontDatabase>

CoinCounter::CoinCounter(QGraphicsItem *parent): QGraphicsTextItem(parent){
    coinCount = 0;

    int id = QFontDatabase::addApplicationFont(":font/CoinCount2.ttf");
    QFontDatabase::applicationFontFamilies(id);
    setPlainText(QString("") + QString::number(coinCount));
    setDefaultTextColor(Qt::black);
    setFont(QFont("CoinCount2",40));
}

void CoinCounter::increase(){
    coinCount++;
    setPlainText(QString("") + QString::number(coinCount));
}

int CoinCounter::getCount(){
    return coinCount;
}
