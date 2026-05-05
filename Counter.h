#pragma once

#include <QObject>

class Counter : public QObject
{
    Q_OBJECT
    Q_PROPERTY(int value READ value NOTIFY valueChanged)

public:
    explicit Counter(QObject *parent = nullptr);

    int value() const;

    Q_INVOKABLE void increase();
    Q_INVOKABLE void reset();

signals:
    void valueChanged();

private:
    int _value = 0;
};