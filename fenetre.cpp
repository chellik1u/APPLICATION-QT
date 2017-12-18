#include "fenetre.h"
#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QTextEdit>
#include <QFile>
#include <QString>
QString affich;
QString tempG;
QString texte;

FENETRE::FENETRE():QWidget()
{

    setFixedSize(700, 500);

    INIT();

    QObject::connect(bouton, SIGNAL(clicked()), this, SLOT(btnClick()));



}
void  FENETRE::btnClick(){

    QString fichier = QFileDialog::getOpenFileName(this, "Ouvrir un fichier", QString());
    QFile FICHIER (fichier);

    if(FICHIER.open(QIODevice::ReadOnly | QIODevice::Text))
     {

        QTextStream flux(&FICHIER);
        tempG = "";
         while(!flux.atEnd()) {
                 QString temp = flux.readLine()+'\n';


                 for (int j = 20; j <= temp.size(); j=j+20){
                         temp.insert(j, "\n");

                        j++;
                }
                 tempG+=temp;
          }
          FICHIER.close();
     }
     else affich = "Impossible d'ouvrir le fichier !";

    zoneTexte->setText(tempG);


}
void FENETRE::INIT()
{
    bouton = new QPushButton("start", this);

   bouton->setFont(QFont("Comic Sans MS", 10));

    bouton->setCursor(Qt::PointingHandCursor);
    bouton->move(60, 50);

     zoneTexte =new QTextEdit(this);

     zoneTexte->setGeometry(100,100,400,200);
      zoneTexte->setReadOnly(true);
}


