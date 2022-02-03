#ifndef RESULTADOS_H
#define RESULTADOS_H

#include <QObject>

class resultados : public QObject
{
    Q_OBJECT
public:
    explicit resultados(QObject *parent = nullptr);
    resultados(const QString &peso, const QString &fecha, float estatura, float IMC);


    void setPeso(const QString &newPeso);
    void setFecha(const QString &newFecha);
    void setEstatura(float newEstatura);
    void setIMC(float newIMC);

    const QString &peso() const;
    const QString &fecha() const;
    const QString &datos() const;
    float estatura() const;
    float IMC() const;

private:
    QString m_peso;
    QString m_fecha;
    QString m_datos;
    float m_estatura;
    float m_IMC;



signals:

};

#endif // RESULTADOS_H
