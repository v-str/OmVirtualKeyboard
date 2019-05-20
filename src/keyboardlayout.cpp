#include "keyboardlayout.h"

KeyboardLayout::KeyboardLayout()
    : m_englishLayout(constructEnglishLayout())
{

}

Keys KeyboardLayout::getEnglishLayout() const
{
    return m_englishLayout;
}

Keys KeyboardLayout::constructEnglishLayout()
{
    return {
        {Qt::Key_0, '0'},
        {Qt::Key_1, '1'},
        {Qt::Key_2, '2'},
        {Qt::Key_3, '3'},
        {Qt::Key_4, '4'},
        {Qt::Key_5, '5'},
        {Qt::Key_6, '6'},
        {Qt::Key_7, '7'},
        {Qt::Key_8, '8'},
        {Qt::Key_9, '9'},
        {Qt::Key_Q, 'q'},
        {Qt::Key_W, 'w'},
        {Qt::Key_E, 'e'},
        {Qt::Key_R, 'r'},
        {Qt::Key_T, 't'},
        {Qt::Key_Y, 'y'},
        {Qt::Key_U, 'u'},
        {Qt::Key_I, 'i'},
        {Qt::Key_O, 'o'},
        {Qt::Key_P, 'p'},
        {Qt::Key_A, 'a'},
        {Qt::Key_S, 's'},
        {Qt::Key_D, 'd'},
        {Qt::Key_F, 'f'},
        {Qt::Key_G, 'g'},
        {Qt::Key_H, 'h'},
        {Qt::Key_J, 'j'},
        {Qt::Key_K, 'k'},
        {Qt::Key_L, 'l'},
        {Qt::Key_Z, 'z'},
        {Qt::Key_X, 'x'},
        {Qt::Key_C, 'c'},
        {Qt::Key_V, 'v'},
        {Qt::Key_B, 'b'},
        {Qt::Key_N, 'n'},
        {Qt::Key_M, 'm'}
    };
}
