#include <iostream>
#include <string>
#include <cstdlib> // c_standard_library (for rand() function)

// Create Route structure (source, destination)
// typedef struct {}
class Route {
private: // Access specifier (Everything below is hidden, cannot be accessed)
    std::string source;
    std::string destination;
    int length;

    // Create private method
    void updateLength() {
        length = (source.empty() || destination.empty()) ? 0 : rand() % 900 + 50; // If empty, 0, else, "accurate" length calculation 
    }

public: // (Everything below can be accessed now)
// Usally, you use classes (data with methods) instead of structures (just data (public by default))

    // Constructors - Method that will be called when object created
    // (must be public, have same name as class, have no return type (not even void) nothing returned)
    //Route() { // No argument constructor
    //    length = 0; 
    //}

    // No argument constructor (2nd version)
    Route() : source("-"), destination("-"), length(0) {
    }

    // Constructor with arguments
    Route(const std::string& s, const std::string& d) {
        setSource(s);
        setDestination(d);
    }


    // Create a method of the structure
    void print() { // No need for parameters inside (), already has access since inside stuct
        std::cout << source << " -> " << destination;
        std::cout << ": " << length << std::endl;
    }

    // Create Get methods (Accessor functions/methods/getters)
    // You cannot access the variables directly, but you can indirectly get them with this
    std::string getSource() {// Usally has no arguments
        return source;
    }
    std::string getDestination() {
        return destination;
        
    }
    int getLength() {
        return length;
    }

    // Set functions (setters/mutator functions)
    void setSource(const std::string& new_source) { // Pass by constant reference is more memory effiencent
        source = new_source;
        updateLength();
    }
    void setDestination(const std::string& new_destination) {
        destination = new_destination;
        updateLength();
    }
};

int main(void) {
    // Create an object of Route structure
    Route spring_trip;
    spring_trip.print(); // Print initialized values first

    //spring_trip.source = "Lakeland";
    spring_trip.setSource("Lakeland");
    //spring_trip.destination = "Honolulu";
    spring_trip.setDestination("Honolulu");
    //spring_trip.length = 4700; // Miles
    spring_trip.print(); // Initial print before change


    // .....


    // Change destination to New York
    // spring_trip.destination = "New York"; // Don't do this. 
    spring_trip.setDestination("New York");

    // Call structure method
    spring_trip.print();

    // Create second Route object
    Route summer_vacation("Lakeland", "Tokyo");
    summer_vacation.print();

    return 0;
}