#include <QCoreApplication>
#include "logic.h"
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);
    if(!Logic::inst())
    {
        return -1;
    }
    Logic::inst()->init();

    cout<<unitbuf;
    char a;
    cin>>a;
//    cout<<"hello 1"<<endl;
//    cout<<"hello 2"<<flush;
    cout<<a;

    int ret = app.exec();
    return ret;
}
