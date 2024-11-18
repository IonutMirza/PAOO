#include "Car.h"
#include <iostream>

using namespace std;

int main() {
    cout << "Creare obiect original (car1)" << endl;
    Car car1("Mitsubishi", "Lancer", 2008, 140);
    car1.print();

    cout << "\nMutarea obiectului (move constructor)" << endl;
    Car car2 = move(car1); // Apelăm move constructor-ul
    car2.print();
    car1.print(); // Verificăm că car1 este gol după mutare

    cout << "\nMutare folosind operatorul de atribuire" << endl;
    Car car3("Ford", "Mustang", 2020, 450);
    cout << "Obiectul inaite de mutare" << endl;
    car3.print(); // Afișam car3 inaite de mutare 
    cout << "\nObiectul dupa mutare" << endl;
    car3 = move(car2); // Apelăm move assignment operator-ul
    car3.print();
    car2.print(); // Verificăm că car2 este gol după mutare

    return 0;
}

