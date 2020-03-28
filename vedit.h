#ifndef VEDIT_H
#define VEDIT_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Vedit; }
QT_END_NAMESPACE

class Vedit : public QMainWindow
{
    Q_OBJECT

public:
    Vedit(QWidget *parent = nullptr);
    ~Vedit();

private:
    Ui::Vedit *ui;
};
#endif // VEDIT_H
