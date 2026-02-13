#include <iostream>
#include <string>

// Create Route structure (source, destination)
typedef struct {
    std::string source;
    std::string destination;
    int length;

    // Create a method of the structure
    void print() { // No need for parameters inside (), already has access since inside stuct
        std::cout << source << " -> " << destination << std::endl;
        std::cout << ": " << length << std::endl;
    }

    // Create Get methods and Set methods
    // ...
} Route;

int main(void) {
    // Create an object of Route structure
    Route spring_trip;
    spring_trip.source = "Lakeland";
    spring_trip.destination = "Honolulu";
    spring_trip.length = 4700; // Miles

    // .....

    // spring_trip.destination = "New York"; //Don't do this.

    // Call structure method
    spring_trip.print();

    return 0;
}