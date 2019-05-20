#ifndef KEYBOARD_FRAME_FABRIC_H
#define KEYBOARD_FRAME_FABRIC_H

#include <QObject>
#include <QScopedPointer>

#include "keyboardlayout.h"

class QFrame;

class KeyboardFrameFabric : public QObject {
    Q_OBJECT
public:
    explicit KeyboardFrameFabric(QObject * parent = Q_NULLPTR);

    QFrame * getFrame(Layout layout);

private:
    void fillFrame(const Keys & keys, QFrame * pFrame);

    QScopedPointer<KeyboardLayout> m_layout;
};

#endif // KEYBOARD_FRAME_FABRIC_H
