#include "winservice.h"

WinService::WinService(int argc, char **argv) : QtService<QCoreApplication> (argc, argv, "Service CommandServer")
{
    setServiceDescription("Service CommandServer");
    setServiceFlags(QtService::CanBeSuspended);
}

void WinService::start()
{
    QCoreApplication *app = application();
    mTcpReciver = new TcpReciver(app);
}
