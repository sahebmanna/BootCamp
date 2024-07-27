//8. Write a C++ program to find the factorial of a number using copy constructor

#include <iostream>

using namespace std;

class FactorialCalculator {
private:
    int number;
    long long factorial=1;

public:

    FactorialCalculator(int num) : number(num) {}

    FactorialCalculator( FactorialCalculator& other) : number(other.number), factorial(other.factorial) {}

    void calculateFactorial() {
        for (int i = 1; i <= number; ++i) {
            factorial *= i;
        }
    }


    void displayFactorial() const {
        cout << "Factorial of " << number << " is: " << factorial << endl;
    }
};

int main() {

    int num;
    cout << "Enter a number: ";
    cin >> num;


    FactorialCalculator originalFactorialCalculator(num);


    FactorialCalculator copiedFactorialCalculator = originalFactorialCalculator;


    originalFactorialCalculator.calculateFactorial();


    originalFactorialCalculator.displayFactorial();


    copiedFactorialCalculator.displayFactorial();

    return 0;
}
