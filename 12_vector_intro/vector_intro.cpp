#include <iostream>
#include <vector> // Vector data structure (vectors are like dynamic arrays)

void print(const std::vector<int>& v); // Using refrence (&), means no temp copy is made to display. Uses ref of original. Const keeps it from being modified

int main (void) {
    // Create a vector
    std::vector<int> v; // An empty vector of integers named 'v'

    // Create and intialize the vector
    std::vector<int> v2 {1, 2, 3, 4, 5, 6};
    print(v2);

    // Provide the size and the default value
    std::vector<int> v3(5, 9); // Vector of 5 elements, each set to 9)
    print(v3);

    // Copy from another vector
    std::vector<int> v4(v2); // Copies v2. Not a reference. Changing v2 later will not change v4
    print(v4);

    // Get the number of elements
    std::cout << "v2 size: " << v2.size() << std::endl;
    std::cout << "v size: " << v.size() << std::endl;

    // First and last elements
    std::cout << "v2 first: " << v2.front() << std::endl;
    std::cout << "v2 last: " << v2.back() << std::endl;

    // Add to the end of the vector
    v2.push_back(10); // Adds a new element to back valued at 10
    print(v2);

    // Remove the last element
    v3.pop_back();

    // Iterators - objects that point to certain locations in the vector
    // begin() - points to the first element in the vector
    // end() - points to the one past the element in the vector

    std::cout << *v2.begin() << std::endl; // * means dereference

    // Insert(location (iterator), value)
    v2.insert(v2.begin() + 1, 1000); // Places a new element, 1000, in the 2nd spot from the beginning
    print(v2);
    v2.insert(v2.end() - 2, 500);
    print(v2);

    return 0;
}

void print (const std::vector<int>& v) {
    for (int i=0; i < v.size(); i++) {
        std::cout << v[i] << " ";
    }
    std::cout << "\n";
}