// Rotates an array a given number of times

#include <iostream>

// Function prototype
void rotateRight(const int src[], int dest[], int size, int k); // Source, Destination, Size, Rotations
//Assume arrays are of same size

int main(void) {
    const int SIZE = 7;
    int list [SIZE] = {1, 2, 3, 4, 5, 6, 7};
    int new_list[SIZE];
    rotateRight(list, new_list, SIZE, 1);

    // Print the list
    for (int i : list) { // Range-based for loop
        std::cout << i << ' ';
    }
    std::cout << std::endl;

        // Print the new list
    for (int i : new_list) { // Range-based for loop
        std::cout << i << ' ';
    }
    std::cout << std::endl;

    return 0;
}

void rotateRight(const int src[], int dest[], int size, int k) {
    int new_first = size - (k % size); // rotate by the remainder (%). Does the same but efficient

    // Copy from new_first till the end of src
    int i = 0;
    int j = new_first;
    while (j < size) {
        dest[i] = src[j];
        i++;
        j++;
    }

    // Copy from the beginning of src till new_first
    j = 0;
    while (j < new_first) {
        dest[i] = src[j];
        i++;
        j++;
    }
    
}