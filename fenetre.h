#ifndef FENETRE_H
#define FENETRE_H

#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QMessageBox>
#include <QFileDialog>
#include <QFile>
#include <QTextEdit>
#include <QTextStream>
class FENETRE: public QWidget
{
    Q_OBJECT
    public:
    FENETRE();
void INIT();
    public slots:
   void btnClick();
    private:
        QPushButton *bouton;
        QTextEdit *zoneTexte;
};
#endif // FENETRE_H
