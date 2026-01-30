#include <iostream>

int power(int base, int exp);

int main(void) {
    std::cout << power(2,20) << std::endl;

    return 0;
}

int power(int base, int exp) {
    if (exp == 0) {
        return 1; // Number^0 = 1
    }
    //int help = power(base, exp - 1);
    //return base * help
    return base * power(base, exp - 1);
}