/*
1. Create a class FLOAT that contains one float data member. Overload all the four
arithmetic operators so that they can operate on the objects of FLOAT.
2. Define a class Rectangle and overload area function for different types of data type.
3. Define a base class Animals having member function sound() . Define another
derived class from Animals class named Dogs. You need to override the sound
function of the base class in the derived class.
4. Define a class Addition that can add 2 or 3 numbers of different data types using
function overloading.
5. Define a class A having multiple constructors. Define another class B derived from
class A. Create derived class constructors and show use of constructor in this single
inheritance.
6. C++ Program to illustrate the use of Constructors in multilevel inheritance of your
choice.
7. C++ Program to illustrate the use of Constructors in single inheritance of your choice.
8. Write a C++ program to find the factorial of a number using copy constructor
9. Write a C++ program to calculate the area of triangle, rectangle and circle using
constructor overloading. The program should be menu driven.
10. Create a C++ class for player objects with the following attributes: player no., name,
number of matches and number of goals done in each match. The number of
matches varies for each player. Write a parameterized constructor which initializes
player no., name, number of subjects and creates an array for number of goals and
number of matches dynamically.*/

#include <iostream>
using namespace std;
class FLOAT {
private:
    float value;

public:
    // Constructor
    FLOAT(float val) : value(val) {}

    // Overloaded addition operator
    FLOAT operator+(const FLOAT& other) const {
        return FLOAT(value + other.value);
    }

    // Overloaded subtraction operator
    FLOAT operator-(const FLOAT& other) const {
        return FLOAT(value - other.value);
    }

    // Overloaded multiplication operator
    FLOAT operator*(const FLOAT& other) const {
        return FLOAT(value * other.value);
    }

    // Overloaded division operator
    FLOAT operator/(const FLOAT& other) const {
        if (other.value != 0) {
            return FLOAT(value / other.value);
        } else {
            std::cerr << "Error: Division by zero." << std::endl;
            // Returning a default value, you may choose to handle the error differently
            return FLOAT(0.0);
        }
    }

    // Function to display the value
    void display() const {
        std::cout << "Value: " << value << std::endl;
    }
};

int main() {
    // Creating objects of FLOAT class
    FLOAT float1(5.5);
    FLOAT float2(2.5);

    // Performing operations and displaying the results
    FLOAT result_add = float1 + float2;
    result_add.display();

    FLOAT result_sub = float1 - float2;
    result_sub.display();

    FLOAT result_mul = float1 * float2;
    result_mul.display();

    FLOAT result_div = float1 / float2;
    result_div.display();

    return 0;
}

