#include <iostream>

void countdown(int n); // Function prototype

int main(void)
{
    countdown(10);

    return 0;
}

void countdown(int n)
{
    if (n < 1)
    {
        return; // Base case: When the function doesn't call itself again)
    }
    std::cout << n << " ";
    countdown(n - 1); // Call the same function (recursive call) (Recursive case: function solves small part of problem, then hands it off to new copy of itself)
}