#include <iostream>
#include <string>

// Create a blueprint (description) of lecture structure
typedef struct { // Create a second name with typedef
    std::string title;
    int duration;
} Lecture; // Use capital letters for structure to differentiate from variables

// Create a function which takes a Lecture structure as input
void printLecture(const Lecture& lecture) { // Pass by & reference so copies are not made. Const to not modify original
    std::cout << "Title:\t\t" << lecture.title << std::endl;
    std::cout << "Duration:\t" << lecture.duration << std::endl;
}

int main(void) {
    // Create an object of Lecture structure
    Lecture oop_lecture;

    // Access the properties (attributes, data members) of Lecture object
    oop_lecture.title = "Classes and Objects";
    oop_lecture.duration = 60 * 50; // In seconds

    printLecture(oop_lecture);
    
    return 0;
}