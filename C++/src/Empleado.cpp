#include "Empleado.h"

Empleado::Empleado()
{
    //se asignan los siguiente valores por defecto al constructor de la clase
    codigo = 0;
    nombre = "";
    horas_t = 0;
    valor_h = 0;
    porcentaje_rt = 0;
}

Empleado::~Empleado()
{
    //dtor
}

//Implementacion del metodo salarioBruto():
int Empleado::salarioBruto()
{
    //para calcular el salario bruto, se debe multiplicar las horas
    //trabajadas por el valor de la hora
    return horas_t * valor_h;
}

//Implementacion del metodo retencionEnFuente()
int Empleado::retencionEnFuente()
{
    //definiremos una variable para convertir el porcentaje a decimal
    //para poder realizar el calculo de porcentaje...
    double convertir_decimal;
    //el porcentaje se dividira entre 100 y el resultado sera un decimal
    convertir_decimal = porcentaje_rt/100;

    //La retención en la fuente es igual al salario bruto por el porcentaje
    //de retención en la fuente.
    return salarioBruto() * convertir_decimal;//se retorna el resultado
}

//Implementacion del metodo salarioNeto():
int Empleado::salarioNeto()
{
    //El salario neto es el salario bruto menos la retencion en fuente.
    return salarioBruto() - retencionEnFuente();
}

//Implementacion de los Metodos Setters y Getters de los atributos:
//codigo, nombre, horas_t, valor_h, poercentaje_rt.
void Empleado::setCodigo(int val)
{
    codigo = val;
}

int Empleado::getCodigo()
{
    return codigo;
}

void Empleado::setNombre(string val)
{
    nombre = val;
}

string Empleado::getNombre()
{
    return nombre;
}

void Empleado::setHorasTrabajadas(int val)
{
    horas_t = val;
}

int Empleado::getHorasTrabajadas()
{
    return horas_t;
}

void Empleado::setValorHora(int val)
{
    valor_h = val;
}

int Empleado::getValorHora()
{
    return valor_h;
}

void Empleado::setPorcentajeRetencionFuente(double val)
{
    porcentaje_rt = val;
}

double Empleado::getPorcentajeRetencionFuente()
{
    return porcentaje_rt;
}
