#ifndef KEYBOARD_FRAME_FABRIC_H
#define KEYBOARD_FRAME_FABRIC_H

#include <QObject>

class QFrame;
class QWidget;

class KeyboardFrameFabric : public QObject {
    Q_OBJECT
public:
    explicit KeyboardFrameFabric(QObject * parent = Q_NULLPTR);

    QFrame * getFrame(QWidget * parent/*Future Enum of layouts*/);

};

#endif // KEYBOARD_FRAME_FABRIC_H
