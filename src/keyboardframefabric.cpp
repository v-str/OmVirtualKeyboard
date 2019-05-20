#include "keyboardframefabric.h"

#include <QFrame>
#include <QString>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QSpacerItem>

static constexpr int button_w = 40;
static constexpr int button_h = 40;

static constexpr int numbers_count_row = 10;
static constexpr int letter_count_row = 10;

KeyboardFrameFabric::KeyboardFrameFabric(QObject * parent)
    : QObject(parent),
      m_layout(new KeyboardLayout())
{

}

QFrame *KeyboardFrameFabric::getFrame(Layout layout)
{
    Q_UNUSED(layout);

    QFrame * pFrame = new QFrame();

    switch (layout) {
    case English:
        fillFrame(m_layout->getEnglishLayout(), pFrame);
        break;
    default:
        break;
    }


    return pFrame;
}

void KeyboardFrameFabric::fillFrame(const Keys &keys, QFrame *pFrame)
{
    QGridLayout * pLayout = new QGridLayout;

    auto alph_row = 1, alph_column = 0, digits_row = 0, digits_column = 0;

    for (auto i = 0; i < keys.size(); ++i){
        QPushButton * pButton = new QPushButton;
        pButton->setText(keys.at(i).second);
        pButton->setFixedSize(button_w, button_h);

        if ( i <= numbers_count_row){
            pLayout->addWidget(pButton, digits_row, digits_column);
            ++digits_column;
        } else {
            pLayout->addWidget(pButton, alph_row, alph_column);
            ++alph_column;
            if(alph_column > letter_count_row){
                ++alph_row;
                alph_column = 0;
            }
        }
    }

//    pLayout->setHorizontalSpacing(100);
//    pLayout->setSpacing(1);
//    pLayout->setRowStretch(alph_row, 100);

    pFrame->setLayout(pLayout);
}
