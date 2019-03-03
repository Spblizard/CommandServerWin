#include "winservice.h"

int main(int argc, char *argv[])
{
    WinService a(argc, argv);

    return a.exec();
}
