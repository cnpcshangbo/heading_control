#ifndef HEADINGCONTROL_H
#define HEADINGCONTROL_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class HeadingControl; }
QT_END_NAMESPACE

class HeadingControl : public QWidget
{
    Q_OBJECT

public:
    HeadingControl(QWidget *parent = nullptr);
    ~HeadingControl();

private:
    Ui::HeadingControl *ui;
};
#endif // HEADINGCONTROL_H
