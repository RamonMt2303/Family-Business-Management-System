//
//  Ocupacion.h
//  proyecto A01702917
//
//  Created by Ramon Mtz on 27/11/20.
//

#ifndef Ocupacion_h
#define Ocupacion_h
#include <iostream>
using namespace std;
/*
 * Defino mi clase Ocupacion.
 */
class Ocupacion{
private:
    string posicion;
    float horasTrabajo;
public:
    /*
     * Inicializo mi constructor.
     */
    Ocupacion(){
        this -> posicion = "";
        this -> horasTrabajo = 0;
    }
    /*
     * La función getPosicion, nos regresa el puesto del empleado en el negocio.
     * @return posicion Posición que ocupa el empleado en el negocio.
     */
    string getPosicion(){
        return this -> posicion;
    }
    /*
     * La función getHorasTrabajo, nos regresa la cantidad de horas que trabaja diario el empleado.
     * @return horasTrabajo Cantidad de horas que trabaja diario el empleado.
     */
    float getHorasTrabajo(){
        return this -> horasTrabajo;
    }
    /*
     * La función setPosicion, nos ayuda a asignar el puesto del empleado en el negocio.
     * @param posicion Posición que ocupa el empleado en el negocio.
     */
    void setPosicion(string posicion){
        this -> posicion = posicion;
    }
    /*
     * La función setHorasTrabajo, nos ayuda a asignar la cantidad de horas de trabajo diarias.
     * @param horasTrabajo Horas diarias de trabajo dentro del negocio.
     */
    void setHorasTrabajo(float horasTrabajo){
        this -> horasTrabajo = horasTrabajo;
    }
    /*
     * La función llenarInfo, nos ayuda a los input de los valores, para después ser asignados a los setters.
     */
    void llenarInfo(){
        string posicion;
        string actividades;
        float horasTrabajo;
        cout << " ¿Qué posición ocupa en el negocio? " << endl;
        cin >> posicion;
        setPosicion(posicion);
        cout << " ¿Cuántas horas trabaja al día? " << endl;
        cin >> horasTrabajo;
        setHorasTrabajo(horasTrabajo);
    }
    /*
     * La función printInfo, nos ayuda a imprimir los valores que fueron ingresados anteriormente, como el sueldo, IVA, sueldo por hora, etc.
     */
    void printInfo(){
        cout << " Su posición en el negocio es: " << getPosicion() << endl;
        cout << " Trabaja " << getHorasTrabajo() << " horas al día " << endl;
    }
};
/*
 * Defino mi clase hija Administrativo, que sale de la clase padre Ocupación.
 */
class Administrativo : public Ocupacion{
private:
    int administrarCuentas;
    int correos;
    int realizarDocumentos;
public:
    /*
     * Inicializo mi consructor.
     */
    Administrativo():Ocupacion(){
    this -> administrarCuentas = 0;
    this -> correos = 0;
    this -> realizarDocumentos = 0;
    }
    /*
     * La función getAdministrarCuentas, nos regresa la cantidad de cuentas que administra el empleado, en caso de ser parte administrativa.
     * @return administrarCuentas Cantidad de cuentas administradas por el empleado.
     */
    int getAdministrarCuentas(){
        return this -> administrarCuentas;
    }
    /*
     * La función getCorreosEnviados, nos regresa la cantidad de correos enviados por el empleado, en caso de ser parte administrativa.
     * @return correos Cantidad de correos diaros enviados por el empleado.
     */
    int getCorreosEnviados(){
        return this -> correos;
    }
    /*
     * La función getDocumentosRealizados, nos regresa la cantidad de documentos realizados por el empleado, en caso de ser parte administrativa.
     * @return realizarDocumentos Cantidad de documentos diarios realizados por el empleado.
     */
    int getDocumentosRealizados(){
        return this -> realizarDocumentos;
    }
    /*
     * La función setAdministrarCuentas, nos ayuda a asignar el número de cuentas administradas por el empleado.
     * @param cuentas Cantidad de cuentas administradas.
     */
    void setAdministrarCuentas(int cuentas){
        this -> administrarCuentas = cuentas;
    }
    /*
     * La función setCorreosEnviados, nos ayuda a asignar el número de correos diarios enviados por el empleado.
     * @param correo Cantidad de correos diarios enviados.
     */
    void setCorreosEnviados(int correo){
        this -> correos = correo;
    }
    /*
     * La función setDocumentosRealizados, nos ayuda a asignar el número de documentos diarios realizados por el empleado.
     * @param realizar Cantidad de documentos diarios realizados.
     */
    void setDocumentosRealizados(int realizar){
        this -> realizarDocumentos = realizar;
    }
    /*
     * La función llenarInfo, nos ayuda a los input de los valores, para después ser asignados a los setters.
     */
    void llenarInfo(){
        int administrarCuentas;
        int correos;
        int realizarDocumentos;
        cout << " ¿Cuántas cuentas maneja del negocio? " << endl;
        cin >> administrarCuentas;
        setAdministrarCuentas(administrarCuentas);
        cout << " ¿Cuántos correos manda al día? " << endl;
        cin >> correos;
        setCorreosEnviados(correos);
        cout << " ¿Cuántos documentos realiza al día? " << endl;
        cin >> realizarDocumentos;
        setDocumentosRealizados(realizarDocumentos);
    }
    /*
     * La función printInfo, nos ayuda a imprimir los valores que fueron ingresados anteriormente, como el sueldo, IVA, sueldo por hora, etc.
     */
    void printInfo(){
        cout << " Maneja en total " << getAdministrarCuentas() << " cuentas del negocio " << endl;
        cout << " Al día manda " << getCorreosEnviados() << " correos " << endl;
        cout << " Al día realiza " << getDocumentosRealizados() << " documentos administrativos " << endl;
    }
};
/*
 * Defino mi clase hija Laboral, que sale de la clase padre Ocupación.
 */
class Laboral : public Ocupacion{
private:
    string actividades;
    int maniobrasDiarias;
    int entregaOxigenoDiario;
public:
    /*
     * Inicializo mi constructor.
     */
    Laboral():Ocupacion(){
        this -> actividades = "";
        this -> maniobrasDiarias = 0;
        this -> entregaOxigenoDiario = 0;
    }
    /*
     * La función getActividades, nos regresa las actividades realizadas por el empleado, en caso de ser parte de el área laboral.
     * @return actividades Actividades que se encarga de realizar.
     */
    string getActividades(){
        return this -> actividades;
    }
    /*
     * La función getManiobras, nos regresa las maniobras diarias realizadas por el empleado, en caso de ser parte de el área laboral.
     * @return maniobrasDiarias Maniobras diarias realizadas.
     */
    int getManiobras(){
        return this -> maniobrasDiarias;
    }
    /*
     * La función getEntregaOxigeno, nos regresa las entregas de oxígeno diarias realizadas por el empleado, en caso de ser parte de el área laboral.
     * @return entregaOxigenoDiario Entregas diarias de oxígeno.
     */
    int getEntregaOxigeno(){
        return this -> entregaOxigenoDiario;
    }
    /*
     * La función setActividades, nos ayuda a asignar las actividades diarias realizadas por el empleado.
     * @param acts Actividades diarias realizadas.
     */
    void setActividades(string acts){
        this -> actividades = acts;
    }
    /*
     * La función setManiobras, nos ayuda a asignar las maniobras diarias realizadas por el empleado.
     * @param maniobras Maniobras diarias realizadas.
     */
    void setManiobras(int maniobras){
        this -> maniobrasDiarias = maniobras;
    }
    /*
     * La función setEntregaOxigeno, nos ayuda a asignar las entregas de oxígeno diarias realizadas por el empleado.
     * @param entrega Entregas diarias de oxígeno.
     */
    void setEntregaOxigeno(int entrega){
        this -> entregaOxigenoDiario = entrega;
    }
    /*
     * La función llenarInfo, nos ayuda a los input de los valores, para después ser asignados a los setters.
     */
    void llenarInfo(){
        string actividades;
        int maniobrasDiarias;
        int entregaOxigenoDiario;
        cout << " ¿Qué actividades realiza? " << endl;
        cin.ignore();
        getline(cin,actividades);
        setActividades(actividades);
        cout << " ¿Cuántas maniobras realiza diario? " << endl;
        cin >> maniobrasDiarias;
        setManiobras(maniobrasDiarias);
        cout << " ¿Cuántos tanques de oxigeno entrega diario? " << endl;
        cin >> entregaOxigenoDiario;
        setEntregaOxigeno(entregaOxigenoDiario);
    }
    /*
     * La función printInfo, nos ayuda a imprimir los valores que fueron ingresados anteriormente, como el sueldo, IVA, sueldo por hora, etc.
     */
    void printInfo(){
        cout << " En el día realiza " << getActividades() << endl;
        cout << " Al día realiza " << getManiobras() << " maniobras " << endl;
        cout << " Entrega " << getEntregaOxigeno() << " tanques de oxígeno diarios " << endl;
    }
};
#endif /* Ocupacion_h */
