// Include the input-output stream library
#include <iostream>

// Define a class named Complex
class Complex
{
private:
    // Store the real part of the complex number
    int real;

    // Store the imaginary part of the complex number
    int imaginary;

public:
    // Constructor to initialize real and imaginary parts
    // Default values are 0
    Complex(int realPart = 0, int imaginaryPart = 0)
        : real(realPart), imaginary(imaginaryPart)
    {
    }

    // Declare a friend function to overload +
    // This function is not a member of the class
    friend Complex operator+(int value, const Complex& number);

    // MODIFICATION:
    // Declare a friend function to overload -
    // This allows expressions such as 10 - complexNumber
    friend Complex operator-(int value, const Complex& number);

    // Function to display the complex number
    void display() const
    {
        // Display the real part
        std::cout << real;

        // Check whether the imaginary part is positive
        if (imaginary >= 0)
        {
            // Display a plus sign
            std::cout << " + ";
        }
        else
        {
            // Display a minus sign
            std::cout << " - ";
        }

        // Display the absolute value of the imaginary part
        std::cout << (imaginary >= 0 ? imaginary : -imaginary)
                  << "i\n";
    }
};

// Define the friend + operator outside the class
Complex operator+(int value, const Complex& number)
{
    // Add the integer value to the real part
    // Keep the imaginary part unchanged
    return Complex(value + number.real, number.imaginary);
}

// MODIFICATION:
// Define the friend - operator outside the class
Complex operator-(int value, const Complex& number)
{
    // Subtract the complex number's real part from the integer
    // Negate the imaginary part because:
    // 10 - (2 + 3i) = 8 - 3i
    return Complex(value - number.real, -number.imaginary);
}

// Main function - execution starts here
int main()
{
    // Create a Complex object containing 2 + 3i
    Complex number(2, 3);

    // Use the friend + operator
    Complex additionResult = 10 + number;

    // Use the newly added friend - operator
    Complex subtractionResult = 10 - number;

    // Display the result of addition
    std::cout << "Result of 10 + complex number: ";
    additionResult.display();

    // Display the result of subtraction
    std::cout << "Result of 10 - complex number: ";
    subtractionResult.display();

    // Indicate successful program termination
    return 0;
}

🎯 Expected Output

Result of 10 + complex number: 12 + 3i
Result of 10 - complex number: 8 - 3i