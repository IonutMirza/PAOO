#ifndef CAR_H
#define CAR_H

#include <string>

using namespace std;

class Car {
private:
    string brand;       // Marca mașinii
    string model;       // Modelul mașinii
    int year;                // Anul de fabricație
    int* horsepower;         // Puterea motorului (în CP) - folosit heap pentru a ilustra destructor și copy/move constructor

public:
    // Constructor
    Car(const string& brand, const string& model, int year, int horsepower);

    // Destructor
    ~Car();

    // Copy constructor
    Car(const Car& other);

    // Move constructor
    Car(Car&& other) noexcept;

    // Funcție pentru afișarea detaliilor despre mașină
    void print() const;
};

#endif
