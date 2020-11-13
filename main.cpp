//
//  main.cpp
//  proyecto A01702917
//
//  Created by Ramon Mtz on 12/11/20.
//

#include <iostream>
#include <string>
using namespace std;
/*
 Declaro mi primera clase para el programa, que en este caso es el negocio, introduzco losproductos que se usan, y todo lo que se vea relacionado con ellos, por ejemplo la cantidad de venta o renta, cuánto cuesta cada unidad, datos de clientes, etc.
 
 Tuve problemas cuando quiero recibir inputs de texto que llevan espacios de por medio, por lo que por ahora solo acepta 1 palabra y no varias.
 */

class Negocio{
private:
    string concepto;
    float ingreso;
    int cantidadProductos;
    string direccionCliente;
    string nombreCliente;
    string telefonoCliente;
    float utilidad;
public:
    /*
     Inicializo el constructor, y seguidamente los getters y los setters.
     */
    Negocio(){
        this -> ingreso = 0;
        this -> concepto = "";
        this -> cantidadProductos = 0;
        this -> utilidad = 0;
        this -> direccionCliente = "";
        this -> nombreCliente = "";
        this -> telefonoCliente = "";
    }
    float getIngreso(){
        return this -> ingreso;
    }
    string getConcepto(){
        return this -> concepto;
    }
    string getDireccionCliente(){
        return this -> direccionCliente;
    }
    string getNombreCliente(){
        return this -> nombreCliente;
    }
    int getCantidadProductos(){
        return this -> cantidadProductos;
    }
    float getUtilidad(){
        return this -> utilidad;
    }
    string getTelefonoCliente(){
        return this -> telefonoCliente;
    }
    void setIngreso(float ingreso){
        this -> ingreso = ingreso;
    }
    void setConcepto(string concepto){
        this -> concepto = concepto;
    }
    void setDireccionCliente(string direccion){
        this -> direccionCliente = direccion;
    }
    void setNombreCliente(string nombre){
        this -> nombreCliente = nombre;
    }
    void setTelefonoCliente(string telefono){
        this -> telefonoCliente = telefono;
    }
    void setCantidadProductos(int cantidad){
        this -> cantidadProductos = cantidad;
    }
    /*
    void setUtilidad(float ingreso, int cantidad){
        this -> utilidad = ingreso * cantidad;
        cout << " La utilidad se ha cambiado con éxito " << endl;
    }
     */
    
    
    /*
    Esta función me ayuda a imprimir los datos sobre los productos y los respectivos clientes, y me ayuda a mantener de forma más corta mi programa.
     */
    void printInfo(){
        cout <<" El concepto del ingreso es: " << getConcepto() << endl;
        cout <<" El valor de cada producto es: " << getIngreso() << " pesos " << endl;
        cout <<" En total se vendieron: " << getCantidadProductos() << " productos " << endl;
        cout <<" Fueron enviados a: " << getDireccionCliente() << endl;
        cout <<" El cliente se llama: " << getNombreCliente() << endl;
        cout <<" Su teléfono es: " << getTelefonoCliente() << endl;
        //cout <<" La utilidad de esta venta fue de: " << getUtilidad() <<" pesos "<< endl;
    }
    /*
    Esta función me ayuda como auxiliar para llenar los datos de los objetos de las
     distintas clases, para ayudarme a no repetir código y ser más eficiente.
    */
    void llenarDatos(){
        string concepto = "";
        float ingreso = 0;
        int cantidadProductos = 0;
        string direccionCliente = "";
        string NombreCliente = "";
        string telefonoCliente = "";
        cout << " ¿Cuál es el concepto del ingreso?" << endl;
        cout << "Atriles" << endl;
        cout << "Carretes"<< endl;
        cout << "Tanques de Oxígeno" << endl;
        cin >> concepto;
        //getline(cin, concepto);
        setConcepto(concepto);
        cout<< " ¿Cuánto cuesta cada uno? "<< endl;
        cin >> ingreso;
        while (ingreso <= 0){
            cout << " Ingrese un dato válido " << endl;
            cin >> ingreso;
        }
            setIngreso(ingreso);
        cout << " ¿Cuántos productos se vendieron o rentaron? "<< endl;
        cin >> cantidadProductos;
        while (cantidadProductos <= 0){
            cout << " Ingrese un dato válido " << endl;
            cin >> cantidadProductos;
        }
            setCantidadProductos(cantidadProductos);
        cout << " ¿A qué dirección fueron enviados? "<< endl;
        cin >> direccionCliente;
        //getline(cin, direccionCliente);
        setDireccionCliente(direccionCliente);
        cout<< " Nombre del cliente "<< endl;
        cin >> NombreCliente;
        //getline(cin, NombreCliente);
        setNombreCliente(NombreCliente);
        cout<< " ¿Qué teléfono tiene el cliente? "<< endl;
        cin >> telefonoCliente;
        //getline(cin, telefonoCliente);
        setTelefonoCliente(telefonoCliente);
    }
};
/*
 Inicializo mi segunda clase, que va enfocada principalmente a los métodos de transporte que tiene mi papá dependiendo de la situación, cuenta con una grúa, camionetas de carga y descarga, e intenté hacerlo lo más semejante posible.
 */
class Transporte{
private:
    float gasolina;
    string nombre;
    string tipoVehiculo;
    float capacidad;
    
public:
    Transporte(){
        this -> gasolina = 0;
        this -> nombre = "";
        this -> tipoVehiculo = "";
        this -> capacidad = 0;
    }
    float getGasolina(){
        return this -> gasolina;
    }
    string getNombre(){
        return this -> nombre;
    }
    string getTipoVehiculo(){
        return this -> tipoVehiculo;
    }
    float getCapacidad(){
        return this -> capacidad;
    }
    void setGasolina(float gasolina){
        this -> gasolina = gasolina;
    }
    void setNombre(string nombre){
        this -> nombre = nombre;
    }
    void setTipoVehiculo(string vehiculo){
        this -> tipoVehiculo = vehiculo;
    }
    void setCapacidad(float capacidad){
        this -> capacidad = capacidad;
    }
    void printInfo1(){
        cout << " El vehículo tiene actualmente " <<getGasolina() <<" litros de gasolina" << endl;
        cout << " El vehículo es " <<getNombre() << endl;
        cout << " El tipo del vehículo es " <<getTipoVehiculo() << endl;
        cout << " El vehículo es capáz de cargar " <<getCapacidad() <<" kg " << endl;
    }
    void llenarInfo1(){
        string nombre = "";
        float gasolina = 0;
        string tipo = "";
        float carga = 0;
        cout << " ¿Cómo se llama el vehículo? " << endl;
        cin >> nombre;
        //getline(cin, nombre);
        setNombre(nombre);
        cout << " ¿Cuánta gasolina tiene el vehículo? " << endl;
        cin >> gasolina;
        setGasolina(gasolina);
        cout << " ¿De qué tipo es el vehículo? Carga pesada, transporte, etc" << endl;
        cin >> tipo;
        //getline(cin, tipo);
        setTipoVehiculo(tipo);
        cout << " ¿Cuánto puede cargar aprox? " << endl;
        cin >> carga;
        setCapacidad(carga);
    }
};

class Empleados{
private:
    float sueldo;
    string nombre;
    int edad;
    string ocupacion;
public:
    Empleados(){
        this -> sueldo = 0;
        this -> nombre = "";
        this -> edad = 0;
        this -> ocupacion = "";
    }
    float getSueldo(){
        return this -> sueldo;
    }
    string getNombre(){
        return this -> nombre;
    }
    int getEdad(){
        return this -> edad;
    }
    string getOcupacion(){
        return this -> ocupacion;
    }
    void setSueldo(float sueldo){
        this -> sueldo = sueldo;
    }
    void setNombre(string nombre){
        this -> nombre = nombre;
    }
    void setEdad(int edad){
        this -> edad = edad;
    }
    void setOcupacion(string ocupacion){
        this -> ocupacion = ocupacion;
    }
    void llenarInfo(){
        float sueldo = 0;
        string nombre = "";
        int edad = 0;
        string ocupacion = "";
        cout << " ¿Cuál es el nombre del empleado? " << endl;
        cin >> nombre;
        //getline(cin, nombre);
        setNombre(nombre);
        cout << " ¿Cuál es su sueldo? " << endl;
        cin >> sueldo;
        setSueldo(sueldo);
        cout << " ¿Cuál es su ocupación en el negocio? " << endl;
        cin >> ocupacion;
        //getline(cin, ocupacion);
        setOcupacion(ocupacion);
        cout << " ¿Cuál es su edad? " << endl;
        cin >> edad;
        setEdad(edad);
    }
    void printInfo(){
        cout << " El nombre del empleado es " << getNombre() << endl;
        cout << " Su sueldo es de " << getSueldo() << endl;
        cout << " Su ocupación es " << getOcupacion() << endl;
        cout << " Su edad es " <<getEdad() <<endl;
    }
};
    



int main() {
    int confirmacion = 0;
    cout << " ¿Qué deseas hacer?" << endl;
    cout << " 1 para entrar al sistema " << endl;
    cout << " 2 para los vehículos " << endl;
    cout << " 3 para los empleados " << endl;
    cout << " ó 0 para salir " << endl;
    cin >> confirmacion;
    if (confirmacion == 0){
        cout << " Gracias por usar el sistema " << endl;
    }else{
        while (confirmacion != 0){
            if(confirmacion == 1){
                Negocio producto;
                producto.llenarDatos();
                producto.printInfo();
                confirmacion = 0;
                cout << " ¿Qué deseas hacer?" << endl;
                cout << " 1 para entrar al sistema " << endl;
                cout << " 2 para los vehículos " << endl;
                cout << " 3 para los empleados " << endl;
                cout << " ó 0 para salir " << endl;
                cin >> confirmacion;
            }else if(confirmacion == 2){
                Transporte vehiculo;
                vehiculo.llenarInfo1();
                vehiculo.printInfo1();
                confirmacion = 0;
                cout << " ¿Qué deseas hacer?" << endl;
                cout << " 1 para entrar al sistema " << endl;
                cout << " 2 para los vehículos " << endl;
                cout << " 3 para los empleados " << endl;
                cout << " ó 0 para salir " << endl;
                cin >> confirmacion;
            }else if (confirmacion == 3){
                Empleados empleado;
                empleado.llenarInfo();
                empleado.printInfo();
                confirmacion = 0;
                cout << " ¿Qué deseas hacer?" << endl;
                cout << " 1 para entrar al sistema " << endl;
                cout << " 2 para los vehículos " << endl;
                cout << " 3 para los empleados " << endl;
                cout << " ó 0 para salir " << endl;
                cin >> confirmacion;
            }else if (confirmacion == 0){
                cout << " Gracias por usar el sistema " << endl;
                break;
            }
        }
    return 0;
    }
}
