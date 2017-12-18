#include <QApplication>
#include "fenetre.h"
#include <QTranslator>
#include <QLocale>
#include <QLibraryInfo>
int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

   FENETRE fenetre ;
    fenetre.show();


    return app.exec();
}

