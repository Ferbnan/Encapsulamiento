#include <iostream>
using namespace std;
//saludos para todos desde mx a gbl

class Animal {
   private:
    string nombre;
    int edad;

   public:
    void setNombre(string n) {
        nombre = n;
    }

    string getNombre() {
        return nombre;
    }

    void setEdad(int e) {
        edad = e;
    }

    int getEdad() {
        return edad;
    }
};

int main() {
    Animal perro;
    perro.setNombre("Fido");
    perro.setEdad(5);
    cout << "El nombre del perro es " << perro.getNombre() << endl;
    cout << "La edad del perro es " << perro.getEdad() << endl;
}