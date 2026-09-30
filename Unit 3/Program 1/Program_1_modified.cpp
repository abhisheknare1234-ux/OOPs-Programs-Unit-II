// Include the input/output stream library
#include <iostream>

// Include the string library to use std::string
#include <string>

// Function to add two integer values
int add(int first, int second)
{
    // Return the sum of two integers
    return first + second;
}

// Overloaded function to add two double values
double add(double first, double second)
{
    // Return the sum of two double values
    return first + second;
}

// Overloaded function to add three integer values
int add(int first, int second, int third)
{
    // Return the sum of three integers
    return first + second + third;
}

// Overloaded function to join two string values
std::string add(std::string first, std::string second)
{
    // Join the two strings and return the result
    return first + second;
}

// Main function - program execution starts here
int main()
{
    // Call the integer version of add()
    std::cout << "Sum of two integers: " << add(10, 20) << '\n';

    // Call the double version of add()
    std::cout << "Sum of two doubles: " << add(2.5, 3.7) << '\n';

    // Call the three-integer version of add()
    std::cout << "Sum of three integers: " << add(10, 20, 30) << '\n';

    // Call the string version of add() to join two strings
    std::cout << "Joined strings: " << add("Hello ", "World!") << '\n';

    // Return 0 to indicate successful program execution
    return 0;
}