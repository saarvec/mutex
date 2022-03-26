#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QThread>

class MyThread : public QThread
{
public:
    MyThread();
    void run();
    bool Stop();
    void NumberChanged(int);
};

#endif // MYTHREAD_H
