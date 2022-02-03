#include "imc.h"
#include "ui_imc.h"

IMC::IMC(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::IMC)
{
    ui->setupUi(this);
}

IMC::~IMC()
{
    delete ui;
}

void IMC::datos()
{

}

void IMC::obtencionDatos()
{
    qDebug()<<m_datos.length();
    for(int j=0;j < m_datos.length(); j++){
        for(int i=0; i < m_datos.length();i++){
            if(m_datos[j]->IMC()<m_datos[i]->IMC()){
                resultados *temp = m_datos[j];
                m_datos[j]=m_datos[i];
                m_datos[i]=temp;
            }
        }
    }

}

void IMC::guardarArchivo()
{
    print();
    QFile archivo(name);
    if(archivo.open(QFile::WriteOnly)){
        archivo.write(printed.toUtf8());
    }
    else{
        QMessageBox::warning(this,"Guardar archivo","Lamentablemente no se pudo guardar");
    }
    archivo.close();
}
void resultados::print()
{
    QString data = "";

}




void IMC::on_btnCalcular_released()
{

    float metros = ui->inAltura->value()/100;
    qDebug()<<metros;
    float calculo = ui->inPeso->value()/(metros*metros);
    ui->inIMC->setText(QString::number(calculo,'f',2));
    m_datos.append(new resultados(QString::number(ui->inPeso->value(),'f',2),ui->inFecha->text(),ui->inAltura->value(),calculo));
    obtencionDatos();
    ui->inPesomaximo->setText((m_datos.at(m_datos.length()-1)->peso()) + " kg");
    ui->inPesominimo->setText((m_datos.at(0)->peso()) + " kg");




}

