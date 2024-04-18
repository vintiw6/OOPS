#include <iostream>
#include <cmath> // For M_PI constant

using namespace std;

const double PI = M_PI; // Define PI for circle area calculation

// Function to calculate the area of a square (uses single side length)
double area(float side)
{
    return side * side;
}

// Function to calculate the area of a rectangle (uses length and breadth)
double area(float length, float breadth)
{
    return length * breadth;
}

// Function to calculate the area of a triangle (uses base and height)
double area(float base, float height)
{
    return (base * height) / 2;
}

// Function to calculate the area of a circle (uses radius)
double area(float radius)
{
    return PI * radius * radius;
}

int main()
{
    float side, length, breadth, radius, base, height;

    cout << "Enter the side of the square: ";
    cin >> side;

    cout << "Enter the length and breadth of the rectangle: ";
    cin >> length >> breadth;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    cout << "Enter the base and height of the triangle: ";
    cin >> base >> height;

    cout << "Area of square = " << area(side) << endl;
    cout << "Area of rectangle = " << area(length, breadth) << endl;
    cout << "Area of circle = " << area(radius) << endl;
    cout << "Area of triangle = " << area(base, height) << endl;

    return 0;
}
