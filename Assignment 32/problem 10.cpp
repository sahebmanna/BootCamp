/*10. Create a C++ class for player objects with the following attributes: player no., name,
number of matches and number of goals done in each match. The number of
matches varies for each player. Write a parameterized constructor which initializes
player no., name, number of subjects and creates an array for number of goals and
number of matches dynamically.*/
#include<iostream>
#include<cmath>

using namespace std;

class Shape {
public:
    // Default constructor
    Shape() {}

    // Constructor for triangle
    Shape(double base, double height) {
        area = 0.5 * base * height;
    }

    // Constructor for rectangle
    Shape(double length, double width, int shapeType) {
        if (shapeType == 2)
            area = length * width;
        else if (shapeType == 3)
            area = 3.1415 * pow(length / 2, 2); // Approximation of Pi
    }

    void displayArea() {
        cout << "Area: " << area << endl;
    }

private:
    double area;
};

int main() {
    int choice;
    double base, height, length, width;

    do {
        cout << "\nMenu:\n";
        cout << "1. Triangle\n";
        cout << "2. Rectangle\n";
        cout << "3. Circle\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:{
                cout << "Enter the base and height of the triangle: ";
                cin >> base >> height;
                Shape triangle(base, height);
                triangle.displayArea();
                break;
            }

            case 2:{
                cout << "Enter the length and width of the rectangle: ";
                cin >> length >> width;
                Shape rectangle(length, width, 2);
                rectangle.displayArea();
                break;
                }

            case 3:{
                cout << "Enter the radius of the circle: ";
                cin >> length;
                Shape circle(length, 0, 3);
                circle.displayArea();
                break;
            }

            case 4:
                cout << "Exiting the program. Goodbye!\n";
                break;

            default:
                cout << "Invalid choice. Please enter a valid option.\n";
        }
    } while (choice != 4);

    return 0;
}
