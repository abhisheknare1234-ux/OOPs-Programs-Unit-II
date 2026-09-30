#include <iostream>  // Provides input/output functions

using namespace std; // Allows us to use cout without std::


// Define the Counter class
class Counter
{
private:
    int value;  // Stores the counter value


public:

    // Constructor to initialize the counter
    // Default value is 0 if no argument is provided
    explicit Counter(int initialValue = 0) : value(initialValue)
    {
    }


    // Prefix increment operator (++counter)
    Counter& operator++()
    {
        ++value;        // Increment the value first
        return *this;   // Return the updated object
    }


    // Postfix increment operator (counter++)
    // The int parameter distinguishes postfix from prefix
    Counter operator++(int)
    {
        Counter old = *this;  // Store the original value
        ++value;              // Increment the current value
        return old;           // Return the original value
    }


    // Prefix decrement operator (--counter)
    Counter& operator--()
    {
        --value;        // Decrement the value first
        return *this;   // Return the updated object
    }


    // Postfix decrement operator (counter--)
    // The int parameter distinguishes postfix from prefix
    Counter operator--(int)
    {
        Counter old = *this;  // Store the original value
        --value;              // Decrement the current value
        return old;           // Return the original value
    }


    // Function to display the current counter value
    void display() const
    {
        cout << value << '\n';  // Print the counter value
    }
};


// Main function
int main()
{
    // Create a Counter object with initial value 5
    Counter counter(5);


    // ---------------- PREFIX INCREMENT ----------------

    cout << "After prefix increment: ";

    // Prefix increment: value is increased before use
    ++counter;

    // Display the updated value
    counter.display();


    // ---------------- POSTFIX INCREMENT ----------------

    cout << "Value returned by postfix increment: ";

    // Postfix increment: old value is returned,
    // while the counter itself is incremented
    Counter oldValue = counter++;

    // Display the value returned by postfix increment
    oldValue.display();


    cout << "Counter after postfix increment: ";

    // Display the current counter value
    counter.display();


    // ---------------- PREFIX DECREMENT ----------------

    cout << "After prefix decrement: ";

    // Prefix decrement: value is decreased before use
    --counter;

    // Display the updated value
    counter.display();


    // ---------------- POSTFIX DECREMENT ----------------

    cout << "Value returned by postfix decrement: ";

    // Postfix decrement: old value is returned,
    // while the counter itself is decremented
    Counter oldDecrementValue = counter--;

    // Display the value returned by postfix decrement
    oldDecrementValue.display();


    cout << "Counter after postfix decrement: ";

    // Display the current counter value
    counter.display();


    // Return 0 to indicate successful execution
    return 0;
}