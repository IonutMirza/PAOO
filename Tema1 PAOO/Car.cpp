#include "Car.h"
#include <iostream>

using namespace std;

// Constructor - inițializează toate atributele
Car::Car(const string& brand, const string& model, int year, int horsepower){
    this->brand=brand;
    this->model=model;
    this->year=year;
    this->horsepower = new int(horsepower); // Alocare pe heap pentru atributul horsepower
}

// Destructor - eliberează memoria alocată pentru horsepower
Car::~Car() {
    delete horsepower;
    std::cout << "Destructor for Car called, memory freed." << endl;
}

// Copy constructor - realizează o copie profundă
Car::Car(const Car& other){
    brand=other.brand;
    model=other.model;
    year=other.year;
    horsepower = new int(*other.horsepower); // Copie a valorii
    std::cout << "Copy constructor for Car called, deep copy made." << endl;
}

// Move constructor - mută resursele de la 'other' la noul obiect
Car::Car(Car&& other) noexcept{
    brand=move(other.brand);
    model=move(other.model); 
    year=other.year; 
    horsepower=other.horsepower; 
    other.horsepower = nullptr; // Lasă 'other' într-o stare validă
    std::cout << "Move constructor for Car called, resources moved." << endl;
}

// Afișează detaliile despre mașină
void Car::print() const {
    cout << "Brand: " << brand << ", Model: " << model << ", Year: " << year 
              << ", Horsepower: " << (horsepower ? *horsepower : 0) << " HP" << endl;
}
