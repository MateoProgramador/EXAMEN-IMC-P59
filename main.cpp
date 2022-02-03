#include "imc.h"
#include <QTranslator>
#include <QInputDialog>

#include <QApplication>

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
        // Objeto para manejar las traducciones
        QTranslator traducion;
        // Solicitando al usuario que seleccione un idioma
        QStringList idiomas;
        idiomas << "Ruso" << "Español";
        QString idiomaSeleccionado = QInputDialog::getItem(NULL,
                                                           "Idioma",
                                                           "Seleccione un idioma",
                                                           idiomas);
        // Dependiendo del idioma seleccionado, carga el archivo de rtaducción
        if (idiomaSeleccionado == "Ruso"){
            traducion.load(":/imc_ru.qm");
        }

        // Si es diferente de español, se instala la traducción en TODA la aplicación
        if (idiomaSeleccionado != "Español"){
            a.installTranslator(&traducion);
        }
        // Muestra la ventana principal
    IMC w;
    w.show();
    return a.exec();
}
