/*4. Define a class Addition that can add 2 or 3 numbers of different data types using
function overloading.*/


#include <iostream>
using namespace std;
class Addition {
public:
    // Function to add two integers
    int add(int a, int b) {
        return a + b;
    }

    // Function to add two doubles
    double add(double a, double b) {
        return a + b;
    }

    // Function to add three integers
    int add(int a, int b, int c) {
        return a + b + c;
    }

    // Function to add three doubles
    double add(double a, double b, double c) {
        return a + b + c;
    }
};

int main() {
    // Creating an object of the Addition class
    Addition adder;

    // Adding two numbers of different data types
    cout << "Sum (int): " << adder.add(5, 3) << endl;
    cout << "Sum (double): " << adder.add(2.5, 4.2) << endl;

    // Adding three numbers of different data types
    cout << "Sum (int): " << adder.add(2, 4, 6) << endl;
    cout << "Sum (double): " << adder.add(1.1, 2.2, 3.3) << endl;

    return 0;
}
