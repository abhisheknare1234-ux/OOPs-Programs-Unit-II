#include <iostream>  // Provides input/output functions

using namespace std; // Allows us to use cout without std::


// Define the Complex class
class Complex
{
private:
    int real;        // Stores the real part
    int imaginary;  // Stores the imaginary part


public:

    // Constructor to initialize real and imaginary parts
    // Default values are 0
    Complex(int realPart = 0, int imaginaryPart = 0)
        : real(realPart), imaginary(imaginaryPart)
    {
    }


    // Overload the binary + operator
    // Adds two complex numbers
    Complex operator+(const Complex& other) const
    {
        // Add real parts and imaginary parts separately
        return Complex(real + other.real,
                       imaginary + other.imaginary);
    }


    // Overload the binary - operator
    // Subtracts two complex numbers
    Complex operator-(const Complex& other) const
    {
        // Subtract real parts and imaginary parts separately
        return Complex(real - other.real,
                       imaginary - other.imaginary);
    }


    // Function to display a complex number
    void display() const
    {
        // Display the real part
        cout << real;

        // Check whether imaginary part is positive or negative
        if (imaginary >= 0)
        {
            // Print + for positive imaginary part
            cout << " + ";
        }
        else
        {
            // Print - for negative imaginary part
            cout << " - ";
        }

        // Print the absolute value of imaginary part
        cout << (imaginary >= 0 ? imaginary : -imaginary) << "i\n";
    }
};


// Main function
int main()
{
    // Create the first complex number: 2 + 3i
    Complex first(2, 3);

    // Create the second complex number: 4 + 5i
    Complex second(4, 5);


    // Add the two complex numbers
    // Internally calls first.operator+(second)
    Complex sum = first + second;


    // Subtract the second complex number from the first
    // Internally calls first.operator-(second)
    Complex difference = first - second;


    // Display the first complex number
    cout << "First complex number: ";
    first.display();


    // Display the second complex number
    cout << "Second complex number: ";
    second.display();


    // Display the sum
    cout << "Sum: ";
    sum.display();


    // Display the difference
    cout << "Difference: ";
    difference.display();


    // Return 0 to indicate successful execution
    return 0;
}