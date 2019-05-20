#ifndef KEYBOARD_LAYOUT_H
#define KEYBOARD_LAYOUT_H

#include <Qt>
#include <QPair>
#include <QString>
#include <QVector>

enum Layout{
    English,
    Russian
};

typedef QVector <QPair<Qt::Key, QString> > Keys;

class KeyboardLayout
{
public:
    KeyboardLayout();

    Keys getEnglishLayout() const;

private:
    Keys constructEnglishLayout();

    Keys m_englishLayout;
};

#endif // KEYBOARD_LAYOUT_H
