#include "logic.h"
#include <QDebug>

Logic* Logic::s_inst = 0;
Logic::Logic(QObject *parent)
    : QObject(parent)
{

}

Logic::~Logic()
{

}

Logic *Logic::inst()
{
    if(s_inst == NULL)
    {
        s_inst = new Logic();
    }
    return s_inst;
}

bool Logic::init()
{
    qDebug()<<"logic init over";

    return true;
}
