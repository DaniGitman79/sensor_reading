#include "Counter.h"

Counter::Counter(QObject *parent)
    : QObject(parent), m_count(0)
{
}

int Counter::count() const
{
    return m_count;
}

void Counter::increment()
{
    m_count++;
    emit countChanged();
}

void Counter::decrement()
{
    m_count--;
    emit countChanged();
}

void Counter::reset()
{
    m_count = 0;
    emit countChanged();
}
