#include <iostream>  // Provides input/output functions such as cout

using namespace std; // Allows us to use cout without writing std::cout


// Function 1: Calculate the area of a square
// Takes one integer argument: side
int calculateArea(int side)
{
    return side * side; // Formula: Area of Square = side × side
}


// Function 2: Calculate the area of a rectangle
// Takes two integer arguments: length and width
int calculateArea(int length, int width)
{
    return length * width; // Formula: Area of Rectangle = length × width
}


// Function 3: Calculate the area of a circle
// Takes one double argument: radius
double calculateArea(double radius)
{
    // Constant value of PI
    constexpr double PI = 3.141592653589793;

    // Formula: Area of Circle = π × radius × radius
    return PI * radius * radius;
}


// Function 4: Calculate the area of a triangle
// Takes two double arguments: base and height
double calculateArea(double base, double height)
{
    // Formula: Area of Triangle = 1/2 × base × height
    return 0.5 * base * height;
}


// Main function: Program execution starts here
int main()
{
    // Calls calculateArea(int) because one integer argument is passed
    cout << "Square Area: " << calculateArea(5) << '\n';


    // Calls calculateArea(int, int) because two integer arguments are passed
    cout << "Rectangle Area: " << calculateArea(6, 4) << '\n';


    // Calls calculateArea(double) because one double argument is passed
    cout << "Circle Area: " << calculateArea(2.0) << '\n';


    // Calls calculateArea(double, double) because two double arguments are passed
    cout << "Triangle Area: " << calculateArea(10.0, 5.0) << '\n';


    // Indicates successful termination of the program
    return 0;
}