#include <iostream>
using namespace std;

double saldo;


class Cuenta {
public:
    Cuenta(double saldoInicial) : saldo(saldoInicial) {}

    void deposito(double cantidad) {
        saldo += cantidad;
    }

    void retiro(double cantidad) {
        if (cantidad > saldo) {
            cout << "El monto del retiro excedió el saldo de la cuenta" <<endl;
        } else {
            saldo -= cantidad;
        }
    }

    double obtenerSaldo() const {
        return saldo;
    }

private:
    double saldo;
};

int main() {
    Cuenta cuenta(1000.0);

    cout << "Saldo inicial: " << cuenta.obtenerSaldo() <<endl;

    cuenta.deposito(500.0);
    cout << "Saldo después del depósito: " << cuenta.obtenerSaldo() <<endl;

    cuenta.retiro(2000.0);
    cout << "Saldo después del retiro: " << cuenta.obtenerSaldo() <<endl;

    cuenta.retiro(500.0);
    cout << "Saldo después del segundo retiro: " << cuenta.obtenerSaldo() <<endl;

    return 0;
}