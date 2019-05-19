#ifndef KEYBOARD_GRID_LAYOUT_CONSTRUCTOR_H
#define KEYBOARD_GRID_LAYOUT_CONSTRUCTOR_H

#include <QObject>

class QWidget;
class QGridLayout;

class KeyboardGridLayoutConstructor : public QObject
{
public:
    explicit KeyboardGridLayoutConstructor(QObject * parent = Q_NULLPTR);
    ~KeyboardGridLayoutConstructor() = default;

    void prepareGridLayout(QWidget * mainWidget);

private:
    QGridLayout * m_pGridLayout = Q_NULLPTR;
};

#endif // KEYBOARD_GRID_LAYOUT_CONSTRUCTOR_H
