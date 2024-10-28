#include "Car.h"
#include <iostream>

using namespace std;

int main() {
    cout << "Creare obiect original (car1)" << endl;
    Car car1("Mitsubishi", "Lancer", 2008, 140);
    car1.print();

    cout << "\nCopierea obiectului (copy constructor)" << endl;
    Car car2 = car1; // Apelăm copy constructor-ul
    car2.print();

    cout << "\nMutarea obiectului (move constructor)" << endl;
    Car car3 = std::move(car1); // Apelăm move constructor-ul
    car3.print();
    car1.print(); // Verificăm că car1 este gol după mutare

    return 0;
}
