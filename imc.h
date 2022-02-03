#ifndef IMC_H
#define IMC_H
#include <QDebug>
#include <QFile>
#include <QMainWindow>
#include <resultados.h>


QT_BEGIN_NAMESPACE
namespace Ui { class IMC; }
QT_END_NAMESPACE

class IMC : public QMainWindow
{
    Q_OBJECT

public:
    IMC(QWidget *parent = nullptr);
    ~IMC();
    void datos();
    void obtencionDatos();
    void guardarArchivo();


private slots:
    void on_btnCalcular_released();

private:
    Ui::IMC *ui;
    QList<resultados*>m_datos;
};
#endif // IMC_H
