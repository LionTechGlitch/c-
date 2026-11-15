// WEEK 5 ACTIVITY 4: geometry function library (with challenge functions)
#include <iostream>
#include <iomanip>
using namespace std;

const double PI = 3.14159;

double areaOfCircle(double radius) {
    if (radius < 0) { cout << "Error: Radius cannot be negative." << endl; return 0.0; }
    return PI * radius * radius;
}
double areaOfRectangle(double length, double width) {
    if (length < 0 || width < 0) { cout << "Error: Length and width cannot be negative." << endl; return 0.0; }
    return length * width;
}
double areaOfTriangle(double base, double height) {
    if (base < 0 || height < 0) { cout << "Error: Base and height cannot be negative." << endl; return 0.0; }
    return 0.5 * base * height;
}
// Challenge functions
double areaOfSquare(double side) {
    if (side < 0) { cout << "Error: Side cannot be negative." << endl; return 0.0; }
    return side * side;
}
double perimeterOfRectangle(double length, double width) {
    if (length < 0 || width < 0) { cout << "Error: Length and width cannot be negative." << endl; return 0.0; }
    return 2 * (length + width);
}

void displayMenu() {
    cout << "\n===== GEOMETRY CALCULATOR =====" << endl;
    cout << "1. Area of Circle" << endl;
    cout << "2. Area of Rectangle" << endl;
    cout << "3. Area of Triangle" << endl;
    cout << "4. Exit" << endl;
    cout << "5. Area of Square" << endl;
    cout << "6. Perimeter of Rectangle" << endl;
    cout << "7. Calculate all (r, l, w, b, h)" << endl;
    cout << "Enter your choice: ";
}

int main() {
    int choice;
    double radius, length, width, base, height, side, area;
    cout << fixed << setprecision(2);

    do {
        displayMenu();
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter radius: "; cin >> radius;
                cout << "Area of circle: " << areaOfCircle(radius) << endl;
                break;
            case 2:
                cout << "Enter length: "; cin >> length;
                cout << "Enter width: "; cin >> width;
                cout << "Area of rectangle: " << areaOfRectangle(length, width) << endl;
                break;
            case 3:
                cout << "Enter base: "; cin >> base;
                cout << "Enter height: "; cin >> height;
                cout << "Area of triangle: " << areaOfTriangle(base, height) << endl;
                break;
            case 4:
                cout << "Goodbye!" << endl;
                break;
            case 5:
                cout << "Enter side: "; cin >> side;
                cout << "Area of square: " << areaOfSquare(side) << endl;
                break;
            case 6:
                cout << "Enter length: "; cin >> length;
                cout << "Enter width: "; cin >> width;
                cout << "Perimeter of rectangle: " << perimeterOfRectangle(length, width) << endl;
                break;
            case 7:
                cout << "Enter radius, length, width, base, height: ";
                cin >> radius >> length >> width >> base >> height;
                area = areaOfCircle(radius);
                cout << "Circle:    " << area << endl;
                cout << "Rectangle: " << areaOfRectangle(length, width) << endl;
                cout << "Triangle:  " << areaOfTriangle(base, height) << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);
    return 0;
}
