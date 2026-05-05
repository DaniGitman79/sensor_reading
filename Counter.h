#pragma once

#include <QObject>

class Counter : public QObject
{
    Q_OBJECT
    Q_PROPERTY(int count READ count NOTIFY countChanged)

public:
    explicit Counter(QObject *parent = nullptr);

    int count() const;

public slots:
    void increment();
    void decrement();
    void reset();

signals:
    void countChanged();

private:
    int m_count;
};
