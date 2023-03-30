#include <iostream>
using namespace std;

class Fecha {
    private:
        int mes;
        int dia;
        int año;

    public:
        Fecha(int m, int d, int a) {
            if (m >= 1 && m <= 12)
                mes = m;
            else
                mes = 1;

            dia = d;
            año = a;
        }

        void setMes(int m) {
            if (m >= 1 && m <= 12)
                mes = m;
            else
                mes = 1;
        }

        void setDia(int d) {
            dia = d;
        }

        void setaño(int a) {
            año = a;
        }

        int getMes() {
            return mes;
        }

        int getDia() {
            return dia;
        }

        int getaño() {
            return año;
        }

        void displayDate() {
            cout << mes << "/" << dia << "/" << año << endl;
        }
};

int main() {
    Fecha fecha(10, 31, 2022);

    fecha.displayDate();

    fecha.setMes(13);  
    fecha.setDia(0);   

    fecha.displayDate();

    return 0;
}