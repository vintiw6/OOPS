#include <iostream>
#include <cmath>
using namespace std;

// Function to calculate the area of a circle
double area(double radius)
{
    return M_PI * radius * radius; // M_PI is a constant defined in cmath for the value of pi
}

// Function to calculate the area of a rectangle
double area(double length, float width)
{
    return length * width;
}

// Function to calculate the area of a triangle
double area(float base, float height)
{
    return 0.5 * base * height;
}

int main()
{
    double radius, length, width;
    float base, height;

    // Circle
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    cout << "Area of the circle: " << area(radius) << endl;

    // Rectangle
    cout << "Enter the length and width of the rectangle: ";
    cin >> length >> width;
    cout << "Area of the rectangle: " << area(length, width) << endl;

    // Triangle
    cout << "Enter the base and height of the triangle: ";
    cin >> base >> height;
    cout << "Area of the triangle: " << area(base, height) << endl;

    return 0;
}
