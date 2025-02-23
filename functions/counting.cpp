#include <iostream>
using namespace std;

void counting(int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << i << endl;
    }
}

int main()
{
    counting(5);
    return 0;
}