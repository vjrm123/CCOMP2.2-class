#include <iostream>
#include <string>

using namespace std;

class MotorVehiculo {
    private:
        string marca;
        string fuelType;
        int año;
        string color;
        int capacidad_motor;

    public:
        MotorVehiculo(string _marca, string _fuelType, int _año, string _color, int _capacidad_motor) {
            marca = _marca;
            fuelType = _fuelType;
            año = _año;
            color = _color;
            capacidad_motor = _capacidad_motor;
        }

        void setMarca(string _marca) {
            marca = _marca;
        }

        void setFuelType(string _fuelType) {
            fuelType = _fuelType;
        }

        void setaño(int _año) {
            año = _año;
        }

        void setColor(string _color) {
            color = _color;
        }

        void setcapacidad_motor(int _capacidad_motor) {
            capacidad_motor = _capacidad_motor;
        }

        string getMarca() {
            return marca;
        }

        string getFuelType() {
            return fuelType;
        }

        int getaño() {
            return año;
        }

        string getColor() {
            return color;
        }

        int getcapacidad_motor() {
            return capacidad_motor;
        }

        void mostrarcarrodetalles() {
            cout << "Marca: " << marca << endl;
            cout << "Tipo de combustible: " << fuelType << endl;
            cout << "año de fabricaccion: " << año << endl;
            cout << "Color: " << color << endl;
            cout << "Capacidad del motor: " << capacidad_motor << endl;
        }
};

int main() {
    MotorVehiculo myCar("Toyota", "Gasolina", 2019, "Blanco", 2000);
    myCar.mostrarcarrodetalles();

    // Cambiar algunos valores
    myCar.setaño(2022);
    myCar.setColor("Rojo");

    // Mostrar los detalles del coche de nuevo
    myCar.mostrarcarrodetalles();

    return 0;
}