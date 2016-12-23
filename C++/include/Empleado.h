#ifndef EMPLEADO_H
#define EMPLEADO_H
#include <iostream>

using namespace std;

class Empleado
{
    public:
        Empleado();
        virtual ~Empleado();
        //Se definen los metodos publicos:
        int salarioBruto();//salarioBruto() de tipo entero
        int retencionEnFuente();//retencionEnFuente() de tipo entero
        int salarioNeto();//salarioNeto() de tipo entero

        //Se definen los metodos Setters y Getters de los atributos privados
        //codigo, nombre, horas_t, valor_h, porcentaje_rt.
        void setCodigo(int val);
        int getCodigo();
        void setNombre(string val);
        string getNombre();
        void setHorasTrabajadas(int val);
        int getHorasTrabajadas();
        void setValorHora(int val);
        int getValorHora();
        void setPorcentajeRetencionFuente(double val);
        double getPorcentajeRetencionFuente();
    protected:

    private:
        int codigo;
        string nombre;
        int horas_t;
        int valor_h;
        double porcentaje_rt;
};

#endif // EMPLEADO_H
