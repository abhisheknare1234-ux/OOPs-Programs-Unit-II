// Include the input-output stream library
#include <iostream>

// Define a class named Distance
class Distance
{
private:
    // Private data member to store distance in meters
    int meters;

public:
    // Constructor to initialize the distance
    explicit Distance(int value)
        : meters(value)
    {
    }

    // Overload the > operator
    bool operator>(const Distance& other) const
    {
        // Compare the meters of two Distance objects
        return meters > other.meters;
    }

    // MODIFICATION:
    // Overload the == operator
    bool operator==(const Distance& other) const
    {
        // Return true if both objects have equal distance
        return meters == other.meters;
    }

    // Function to display the distance
    void display() const
    {
        // Display the distance followed by "meters"
        std::cout << meters << " meters\n";
    }
};

// Main function - execution starts here
int main()
{
    // Create the first Distance object
    Distance first(120);

    // Create the second Distance object
    Distance second(120);

    // Display the first distance
    std::cout << "First distance: ";
    first.display();

    // Display the second distance
    std::cout << "Second distance: ";
    second.display();

    // Check whether the first distance is greater
    // than the second distance
    if (first > second)
    {
        // Execute if first distance is greater
        std::cout << "First distance is greater\n";
    }
    else
    {
        // Execute if first distance is not greater
        std::cout << "First distance is not greater\n";
    }

    // MODIFICATION:
    // Check whether both distances are equal
    if (first == second)
    {
        // Execute when both distances are equal
        std::cout << "Both distances are equal\n";
    }
    else
    {
        // Execute when distances are different
        std::cout << "Distances are not equal\n";
    }

    // Indicate successful program termination
    return 0;
}


🎯 Expected Output
First distance: 120 meters
Second distance: 120 meters
First distance is not greater
Both distances are equal