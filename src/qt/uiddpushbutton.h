#ifndef UIDDPUSHBUTTON_H
#define UIDDPUSHBUTTON_H
#include <QPushButton>
#include <QStyleOptionButton>
#include <QIcon>

class UiddPushButton : public QPushButton
{
public:
    explicit UiddPushButton(QWidget * parent = Q_NULLPTR);
    explicit UiddPushButton(const QString &text, QWidget *parent = Q_NULLPTR);

protected:
    void paintEvent(QPaintEvent *) Q_DECL_OVERRIDE;

private:
    void updateIcon(QStyleOptionButton &pushbutton);

private:
    bool m_iconCached;
    QIcon m_downIcon;
};

#endif // UIDDPUSHBUTTON_H
