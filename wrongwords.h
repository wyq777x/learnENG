#ifndef WRONGWORDS_H
#define WRONGWORDS_H

#include <QDialog>

namespace Ui {
class wrongwords;
}

class wrongwords : public QDialog
{
    Q_OBJECT

public:
    explicit wrongwords(QWidget *parent = nullptr);
    ~wrongwords();

private:
    Ui::wrongwords *ui;
};

#endif // WRONGWORDS_H
