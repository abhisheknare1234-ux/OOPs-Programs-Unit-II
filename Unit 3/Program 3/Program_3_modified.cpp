#include <iostream>  // Provides input and output functions

using namespace std; // Allows us to use cout without std::


// Balance class
class Balance
{
private:
    double balance;  // Stores the balance amount

public:

    // Constructor to initialize the balance
    Balance(double amount) : balance(amount)
    {
    }


    // Overloading unary minus (-) operator
    // This function returns a new Balance object
    // containing the negative value of the current balance
    Balance operator-() const
    {
        return Balance(-balance);
    }


    // Function to display the balance
    void display() const
    {
        cout << balance << '\n';  // Display the stored balance
    }
};


// Main function
int main()
{
    // Create a Balance object with balance value 5000
    Balance original(5000.0);


    // Apply unary minus operator to the original balance
    // This internally calls original.operator-()
    Balance negative = -original;


    // Display the original balance
    cout << "Original balance: ";
    original.display();


    // Display the negative balance
    cout << "Negative balance: ";
    negative.display();


    // Return 0 to indicate successful program execution
    return 0;
}