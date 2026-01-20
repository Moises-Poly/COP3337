/*
    First C++ Program
    01/14/2026
*/

#include <iostream>

//using namespace std;  //opens namespace so you don't have to type std:: every time, but not good habit


int main(void) { // void=no arguments?
    std::cout << "Hello from COP3337!\n" << std::endl;

    std::cout << 87 * 76 - 98 << std::endl;

    // std = standard namespace
    // cout = console output (object of iostream class)
    // << = steam insertion operator
    // endl = end of line

    return 0; // 0=success; non-zero=error
}