#include "Counter.h"

Counter::Counter(QObject *parent)
    : QObject(parent)
{
}

int Counter::value() const
{
    return _value;
}

void Counter::increase()
{
    _value++;
    emit valueChanged();
}

void Counter::reset()
{
    _value = 0;
    emit valueChanged();
}