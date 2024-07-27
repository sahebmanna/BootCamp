/*6. C++ Program to illustrate the use of Constructors in multilevel inheritance of your
choice.*/

#include <iostream>
using namespace std;

class Vehicle {
public:
    Vehicle() {
        cout << "Vehicle constructor called." << endl;
    }

    ~Vehicle() {
        cout << "Vehicle destructor called." << endl;
    }
};


class Car : public Vehicle {
public:
    Car() {
        cout << "Car constructor called." << endl;
    }

    ~Car() {
        cout << "Car destructor called." << endl;
    }
};


class SportsCar : public Car {
public:
    SportsCar() {
        cout << "SportsCar constructor called." << endl;
    }

    ~SportsCar() {
        cout << "SportsCar destructor called." << endl;
    }
};

int main() {

    SportsCar mySportsCar;

    return 0;
}
