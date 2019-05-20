#ifndef DIGITS_FRAME_H
#define DIGITS_FRAME_H

#include <QFrame>

namespace Ui {
class DigitsFrame;
}

class DigitsFrame : public QFrame
{
    Q_OBJECT

public:
    explicit DigitsFrame(QWidget *parent = Q_NULLPTR);
    ~DigitsFrame();

private:
    Ui::DigitsFrame *ui = Q_NULLPTR;
};

#endif // DIGITS_FRAME_H
