#ifndef MENUTAGEXPLORE_H
#define MENUTAGEXPLORE_H

#include <QDialog>
#include "ui_explorer.h"

class Explorer : public QDialog, public Ui::ExplorerClass
{
    Q_OBJECT

private slots:

    void dofunc();
    class Explorer : public QDialog

public:
    ExplorerClass();

};


namespace Ui {
    class Explorer: public ExplorerClass {};
}

#endif // MENUTAGEXPLORE_H
