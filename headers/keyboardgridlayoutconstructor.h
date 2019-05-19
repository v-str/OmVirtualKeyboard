#ifndef KEYBOARD_GRID_LAYOUT_CONSTRUCTOR_H
#define KEYBOARD_GRID_LAYOUT_CONSTRUCTOR_H

#include <QObject>
#include <QVector>
#include <QChar>
#include <QPair>

class QWidget;
class QGridLayout;

class KeyboardGridLayoutConstructor : public QObject
{
    Q_OBJECT
public:
    explicit KeyboardGridLayoutConstructor(QObject * parent = Q_NULLPTR);
    ~KeyboardGridLayoutConstructor() = default;

    void prepareGridLayout(QWidget * mainWidget);
    QGridLayout * gridLayout();

signals:
    void keyClicked(const QString & text);

private slots:
    void keyButtonClicked(const QString & text);

private:
    void constructDefaultKeysArray();

    QVector<QPair<Qt::Key, QChar> > m_keySet;

    QGridLayout * m_pGridLayout = Q_NULLPTR;
};

#endif // KEYBOARD_GRID_LAYOUT_CONSTRUCTOR_H
