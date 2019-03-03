#ifndef WINSERVICE_H
#define WINSERVICE_H

#include <QCoreApplication>
#include <QtService>
#include "tcpreciver/tcpreciver.h"

class WinService : public QtService<QCoreApplication>
{
public:

    WinService(int, char**);
    void start();
private:

    TcpReciver *mTcpReciver;
};

#endif // WINSERVICE_H
