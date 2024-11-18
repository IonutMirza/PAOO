#include "Car.h"
#include <iostream>

using namespace std;

// Constructor - inițializare cu liste
Car::Car(const string& brand, const string& model, int year, int horsepower)
    : brand(brand), model(model), year(year), horsepower(new int(horsepower)) {}

// Destructor - eliberează memoria alocată pentru horsepower
Car::~Car() {
    delete horsepower;
    cout << "Destructor called, memory freed." << endl;
}

// Move constructor - mută resursele
Car::Car(Car&& other) noexcept 
    : brand(move(other.brand)), model(move(other.model)), 
      year(other.year), horsepower(other.horsepower) {
    other.horsepower = nullptr;
    cout << "Move constructor called, resources moved." << endl;
}

// Move assignment operator
Car& Car::operator=(Car&& other) noexcept {
    if (this != &other) {
        delete horsepower;
        brand = move(other.brand);
        model = move(other.model);
        year = other.year;
        horsepower = other.horsepower;
        other.horsepower = nullptr;
    }
    return *this;
}

void Car::print() const {
    cout << "Brand: " << brand << ", Model: " << model << ", Year: " << year
              << ", Horsepower: " << (horsepower ? *horsepower : 0) << " HP" << endl;
}
