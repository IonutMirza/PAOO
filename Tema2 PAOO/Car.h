#ifndef CAR_H
#define CAR_H

#include <string>
#include <iostream>
#include <memory>

using namespace std;

class Car {
private:
    string brand;
    string model;
    int year;
    int* horsepower;
    // unique_ptr<int> horsepower;
    // Copy constructor - dezactivat
    Car(const Car& other);
    // Copy assignment operator - dezactivat
    Car& operator=(const Car& other);
 
public:
    // Constructor
    Car(const string& brand, const string& model, int year, int horsepower);

    // Destructor
    ~Car();

    // Move constructor
    Car(Car&& other) noexcept;

    // Move assignment operator
    Car& operator=(Car&& other) noexcept;

    // Funcție pentru afișarea detaliilor
    void print() const;
};

#endif
