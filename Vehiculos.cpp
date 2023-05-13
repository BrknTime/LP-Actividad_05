#include <iostream>
#include <string>
using namespace std;

class Vehiculo {
    protected:
    string marca;
    string modelo;
    int year;
    string tipo_combustible;
    float capacidad_carga;
    string nombre_cliente;

public:

    Vehiculo(string marca, string modelo, int year, string tipo_combustible, float capacidad_carga, string nombre_cliente ) 
    {
    this->marca = marca;
    this->modelo = modelo;
    this->year = year;
    this->tipo_combustible = tipo_combustible;
    this->capacidad_carga = capacidad_carga;
    this->nombre_cliente = nombre_cliente;
    }

    virtual ~Vehiculo() {}

    virtual string getTipo() = 0;

    string getMarca() const {
    return marca;
    }

    string getModelo() const {
    return modelo;
    }

    int getYear() const {
    return year;
    }

    string getTipoCombustible() const {
    return tipo_combustible;
    }

    float getCapacidadCarga() const {
    return capacidad_carga;
    }
    string getNombreCliente() const {
    return nombre_cliente;
    }
    };

class Auto : public Vehiculo {
    private:
    int num_puertas;

    public:
    Auto(string marca, string modelo, int year, string tipo_combustible, float capacidad_carga, int num_puertas, string nombre_cliente) : Vehiculo(marca, modelo, year, tipo_combustible, capacidad_carga, nombre_cliente) 
    {
        this->num_puertas = num_puertas;
    }
    ~Auto() {}
    string getTipo() 
    {
    return "Auto";
    }
    int getNumPuertas() const 
    {
    return num_puertas;
    }


};

class Camioneta : public Vehiculo 
{
    private:
    bool es_4x4;

    public:
    Camioneta(string marca, string modelo, int year, string tipo_combustible, float capacidad_carga, bool es_4x4,string nombre_cliente) : Vehiculo(marca, modelo, year, tipo_combustible, capacidad_carga,nombre_cliente) 
    {
    this->es_4x4 = es_4x4;
    }

    ~Camioneta() {}

    string getTipo() 
    {
    return "Camioneta";
    }

    bool getEs4x4() const 
    {
    return es_4x4;
    }
    };

class Camion : public Vehiculo 
{
    private:
    float longitud_caja;

    public:
    Camion(string marca, string modelo, int year, string tipo_combustible, float capacidad_carga, float longitud_caja,string nombre_cliente) : Vehiculo(marca, modelo, year, tipo_combustible, capacidad_carga,nombre_cliente) 
    {
    this->longitud_caja = longitud_caja;
    }

    ~Camion() {}

    string getTipo() 
    {
    return "Camion";
    }

    float getLongitudCaja() const 
    {
    return longitud_caja;
    }
};

int main() {

    Auto auto1("Audi", "V8", 2022, "Gasolina", 500, 2, "Andre");
    Camioneta camioneta1("Ford", "Explorer", 2021, "Gasolina", 800, true, "Kikin");
    Camion camion1("Volvo", "VNL 860", 2023, "Diesel", 20000, 53, "Guchi");

    cout << "=============================="<<endl;
    cout << "Marca: " << auto1.getMarca() << endl;
    cout << "Modelo: " << auto1.getModelo() << endl;
    cout << "Año: " << auto1.getYear() << endl;
    cout << "Tipo de combustible: " << auto1.getTipoCombustible() << endl;
    cout << "Capacidad de carga: " << auto1.getCapacidadCarga() << endl;
    cout << "Número de puertas: " << auto1.getNumPuertas() << endl;
    cout << "Nombre del cliente: " << auto1.getNombreCliente() << endl;
    cout << "=============================="<<endl;

    cout << "Marca: " << camioneta1.getMarca() << endl;
    cout << "Modelo: " << camioneta1.getModelo() << endl;
    cout << "Año: " << camioneta1.getYear() << endl;
    cout << "Tipo de combustible: " << camioneta1.getTipoCombustible() << endl;
    cout << "Capacidad de carga: " << camioneta1.getCapacidadCarga() << endl;
    cout << (camioneta1.getEs4x4() ? "Es 4x4" : "No es 4x4") << endl;
    cout << "Nombre del cliente: " << camioneta1.getNombreCliente() << endl;
    cout << "=============================="<<endl;
    cout << "Marca: " << camion1.getMarca() << endl;
    cout << "Modelo: " << camion1.getModelo() << endl;
    cout << "Año: " << camion1.getYear() << endl;
    cout << "Tipo de combustible: " << camion1.getTipoCombustible() << endl;
    cout << "Capacidad de carga: " << camion1.getCapacidadCarga() << endl;
    cout << "Nombre del cliente: " << camion1.getNombreCliente() << endl;
    cout << "=============================="<<endl;
};
