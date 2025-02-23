#include <iostream>
using namespace std;

void factorial(int num)
{
    int fact = 1;
    for (int i = num; i > 0; i--)
    {
        fact *= i;
    }
    cout << "factorial is " << fact;
}

int main()
{
    factorial(5);
    return 0;
}