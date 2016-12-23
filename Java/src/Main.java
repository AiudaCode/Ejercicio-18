
import javax.swing.JOptionPane;

public class Main
{
    //se define e implementa el metodo llenarDatos(), para almacenar la información del empelado
    //y luego llamarla desde el main.
    public static void llenarDatos(Empleado obj)
    {
        int c, h_t, v_h;//se definen las variables c(codigo), h_t(horas trabajadas)
        //v_h(valor hora) de tipo entero
        String n;//se define la variable n(nombre) de tipo string
        double p_rt;//se define la variable p_rt(porcentaje retencion fuente) de tipo float.

        //se pide el codigo y se guarda el codigo en "c";
        c = Integer.parseInt(JOptionPane.showInputDialog(null,"Digite codigo del empleado"));
        obj.setCodigo(c);//se encapsula el codigo(c)

        //se pide el nombre y se guarda el nombre en "n";
        n = JOptionPane.showInputDialog(null,"Digite nombre del empleado");
        obj.setNombre(n);//se encapsula el nombre(n)

        //se pide las horas trabajadas y se guarda las horas trabajadas en "h_t"
        h_t = Integer.parseInt(JOptionPane.showInputDialog(null,"Digite las horas trabajadas del empleado"));
        obj.setHorasTrabajadas(h_t);//se encapsula las horas trabajadas(h_t)

        //se pide el valor de la hora y se guarda el valor de la hora "v_h"
        v_h = Integer.parseInt(JOptionPane.showInputDialog(null,"Digite el valor de la hora"));
        obj.setValorHora(v_h);//se encapsula el valor de la hora(v_h)

        //se pide el porcentaje de retencion de fuente y se guarda el porcentaje de retencion de fuente "p_rt"
        p_rt = Double.parseDouble(JOptionPane.showInputDialog(null,"Digite el porcentaje de retencion de fuente"));
        obj.setPorcentajeRetencionFuente(p_rt);//se encapsula el valor del porcentaje(p_rt)
    }

    public static void main(String[] args)
    {
        //Se crea un objeto de la clase Empleado (Instanciaciación)
        Empleado obj = new Empleado();

        //le pasaremos un objeto de la clase Empleado al metodo llenarDatos()
        //para poder llamar a sus metodos, y no tener que instanciar ya que si
        //instanciamos en el metodo llenarDatos el constructor volvera a asignar
        //atributos por defecto
        llenarDatos(obj);

        //Se muestra el nombre del empleado
        JOptionPane.showMessageDialog(null, "Nombre del empleado: " + obj.getCodigo());
        //Se muestra el codigo del empleado
        JOptionPane.showMessageDialog(null, "Codigo: " + obj.getNombre());
        //Se muestra el salario bruto
        JOptionPane.showMessageDialog(null, "Salario Bruto: $" + obj.salarioBruto());
        //Se muestra el salario neto
        JOptionPane.showMessageDialog(null, "Salario Neto: $" + obj.salarioNeto());
    }
}