public class Empleado
{
    //se definen los atributos privados:
    private int codigo;//codigo de tipo entero
    private String nombre;//nombre de tipo string
    private int horas_t;//horas_t de tipo entero
    private int valor_h;//valor_h de tipo entero
    private double porcentaje_rt;//porcentaje_rt de tipo double
    
    public Empleado()
    {
        //se asignan los siguiente valores por defecto al constructor de la clase
        codigo = 0;
        nombre = "";
        horas_t = 0;
        valor_h = 0;
        porcentaje_rt = 0;
    }

    //Implementacion del metodo salarioBruto():
    public double salarioBruto()
    {
        //para calcular el salario bruto, se debe multiplicar las horas
        //trabajadas por el valor de la hora
        return horas_t * valor_h;
    }

    //Implementacion del metodo retencionEnFuente()
    public double retencionEnFuente()
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
    public double salarioNeto()
    {
        //El salario neto es el salario bruto menos la retencion en fuente.
        return salarioBruto() - retencionEnFuente();
    }

    //Implementacion de los Metodos Setters y Getters de los atributos:
    //codigo, nombre, horas_t, valor_h, poercentaje_rt.
    public void setCodigo(int val)
    {
        codigo = val;
    }

    public int getCodigo()
    {
        return codigo;
    }

    public void setNombre(String val)
    {
        nombre = val;
    }

    public String getNombre()
    {
        return nombre;
    }

    public void setHorasTrabajadas(int val)
    {
        horas_t = val;
    }

    public int getHorasTrabajadas()
    {
        return horas_t;
    }

    public void setValorHora(int val)
    {
        valor_h = val;
    }

    public int getValorHora()
    {
        return valor_h;
    }

    public void setPorcentajeRetencionFuente(double val)
    {
        porcentaje_rt = val;
    }

    public double getPorcentajeRetencionFuente()
    {
        return porcentaje_rt;
    }
}
