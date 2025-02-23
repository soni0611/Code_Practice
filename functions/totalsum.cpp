#include <iostream>
using namespace std;

int totalsum(int num)
{
    int sum = 0;
    for (int i = 1; i <= num; i++)
    {
        sum += i;
    }
    return sum;
}

int main()
{
    int total = totalsum(5);
    cout << total;
    return 0;
}