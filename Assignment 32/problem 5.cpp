/*5. Define a class A having multiple constructors. Define another class B derived from
class A. Create derived class constructors and show use of constructor in this single
inheritance.*/
#include <iostream>

class A {
private:
    int dataA;

public:
    // Default constructor
    A() : dataA(0) {
        std::cout << "A's Default Constructor" << std::endl;
    }

    // Parameterized constructor
    A(int value) : dataA(value) {
        std::cout << "A's Parameterized Constructor with value: " << value << std::endl;
    }

    // Member function
    void display() {
        std::cout << "Data in class A: " << dataA << std::endl;
    }
};

class B : public A {
private:
    int dataB;

public:
    // Default constructor for B, it implicitly calls A's default constructor
    B() : dataB(0) {
        std::cout << "B's Default Constructor" << std::endl;
    }

    // Parameterized constructor for B, it explicitly calls A's parameterized constructor
    B(int valueA, int valueB) : A(valueA), dataB(valueB) {
        std::cout << "B's Parameterized Constructor with values: " << valueA << ", " << valueB << std::endl;
    }

    // Member function
    void displayB() {
        display(); // Accessing the member function of the base class A
        std::cout << "Data in class B: " << dataB << std::endl;
    }
};

int main() {
    // Using default constructors
    B objB1;
    objB1.displayB();

    std::cout << std::endl;

    // Using parameterized constructors
    B objB2(10, 20);
    objB2.displayB();

    return 0;
}


