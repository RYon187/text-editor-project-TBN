#ifndef TEST_H
#define TEST_H

#include <QObject>
#include <QQmlEngine>

class Test : public QObject
{
    Q_OBJECT
    QML_ELEMENT
    Q_PROPERTY(QString message READ message WRITE setMessage NOTIFY messageChanged)

public:
    explicit Test(QObject *parent = nullptr);

    QString message() const;
    void setMessage(const QString &message);

signals:
    void messageChanged();

private:
    QString m_message;
};

#endif
