#include "resultados.h"

resultados::resultados(QObject *parent) : QObject(parent)
{

}

void resultados::setPeso(const QString &newPeso)
{
    m_peso = newPeso;
}

void resultados::setFecha(const QString &newFecha)
{
    m_fecha = newFecha;
}

void resultados::setEstatura(float newEstatura)
{
    m_estatura = newEstatura;
}

void resultados::setIMC(float newIMC)
{
    m_IMC = newIMC;
}

const QString &resultados::peso() const
{
    return m_peso;
}

const QString &resultados::fecha() const
{
    return m_fecha;
}

const QString &resultados::datos() const
{
    return m_datos;
}

float resultados::estatura() const
{
    return m_estatura;
}

float resultados::IMC() const
{
    return m_IMC;
}

resultados::resultados(const QString &peso, const QString &fecha, float estatura, float IMC) : m_peso(peso),
    m_fecha(fecha),
    m_estatura(estatura),
    m_IMC(IMC)
{

}
