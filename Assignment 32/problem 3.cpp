/*3. Define a base class Animals having member function sound() . Define another
derived class from Animals class named Dogs. You need to override the sound
function of the base class in the derived class.
*/
#include <iostream>
using namespace std;
class Rectangle {
private:
    // Private data members
    double length;
    double width;

public:
    // Constructor
    Rectangle(double l, double w) : length(l), width(w) {}

    // Overloaded area function for int data type
    int area(int scale = 1) const {
        return static_cast<int>(scale * length * width);
    }

    // Overloaded area function for double data type
    double area(double scale = 1.0) const {
        return scale * length * width;
    }

    // Overloaded area function for float data type
    float area(float scale = 1.0f) const {
        return scale * static_cast<float>(length * width);
    }
};

int main() {
    // Creating objects of Rectangle class
    Rectangle rectangle1(5.0, 3.0);
    Rectangle rectangle2(4.0, 6.0);

    // Calculating and displaying areas with different data types
    cout << "Area (int): " << rectangle1.area(2) << std::endl;
    cout << "Area (double): " << rectangle1.area(1.5) << std::endl;
    cout << "Area (float): " << rectangle2.area(0.8f) << std::endl;

    return 0;
}
