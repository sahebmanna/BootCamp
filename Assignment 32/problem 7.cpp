/*7. C++ Program to illustrate the use of Constructors in single inheritance of your choice.*/
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

int main(){

    Car myCar;

    return 0;
}
