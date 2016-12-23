#include <iostream>
//Se incluye la clase Empleado para despues llamar a sus metodos
#include "Empleado.h"

using namespace std;

//se define e implementa el metodo llenarDatos(), para almacenar la información del empelado
//y luego llamarla desde el main.
void llenarDatos(Empleado* obj)
{
    int c, h_t, v_h;//se definen las variables c(codigo), h_t(horas trabajadas)
    //v_h(valor hora) de tipo entero
    string n;//se define la variable n(nombre) de tipo string
    double p_rt;//se define la variable p_rt(porcentaje retencion fuente) de tipo float.

    //se pide el codigo
    cout << "Digite codigo del empleado" << endl;
    cin >> c;//se guarda el codigo en "c";
    obj->setCodigo(c);//se encapsula el codigo(c)

    //se pide el nombre
    cout << "Digite nombre del empleado" << endl;
    cin >> n;//se guarda el nombre en "n";
    obj->setNombre(n);//se encapsula el nombre(n)

    //se pide las horas trabajadas
    cout << "Digite las horas trabajadas del empleado" << endl;
    cin >> h_t;//se guarda las horas trabajadas en "h_t"
    obj->setHorasTrabajadas(h_t);//se encapsula las horas trabajadas(h_t)

    //se pide el valor de la hora
    cout << "Digite el valor de la hora" << endl;
    cin >> v_h;//se guarda el valor de la hora "v_h"
    obj->setValorHora(v_h);//se encapsula el valor de la hora(v_h)

    //se pide el porcentaje de retencion de fuente
    cout << "Digite el porcentaje de retencion de fuente" << endl;
    cin >> p_rt;//se el porcentaje de retencion de fuente "p_rt"
    obj->setPorcentajeRetencionFuente(p_rt);//se encapsula el valor del porcentaje(p_rt)
}
int main()
{
    //Se crea un objeto de la clase Empleado (Instanciaciación)
    Empleado* obj = new Empleado();

    //le pasaremos un objeto de la clase Empleado al metodo llenarDatos()
    //para poder llamar a sus metodos, y no tener que instanciar ya que si
    //instanciamos en el metodo llenarDatos el constructor volvera a asignar
    //atributos por defecto
    llenarDatos(obj);

    //Se muestra el nombre del empleado
    cout << "Nombre del empleado: " << obj->getCodigo() << endl;
    //Se muestra el codigo del empleado
    cout << "Codigo: " << obj->getNombre() << endl;
    //Se muestra el salario bruto
    cout << "Salario Bruto: $" << obj->salarioBruto() << endl;
    //Se muestra el salario neto
    cout << "Salario Neto: $" << obj->salarioNeto() << endl;
    return 0;
}
