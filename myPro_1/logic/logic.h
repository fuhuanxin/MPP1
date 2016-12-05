#ifndef LOGIC_H
#define LOGIC_H

#include <QObject>

class Logic : public QObject
{
    Q_OBJECT
public:
    explicit Logic(QObject *parent = 0);
    ~Logic();

    static Logic *inst();
    bool init();

private:
    static Logic* s_inst;

signals:

public slots:
};

#endif // LOGIC_H
