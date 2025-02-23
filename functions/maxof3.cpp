#include <iostream>
using namespace std;

void maxnumber(int x, int y, int z)
{
    if (x > y && x > z)
    {
        cout << "Max number is " << x;
    }
    else if (y > x && y > z)
    {
        cout << "Max number is " << y;
    }
    else
        cout << "Max number is " << z;
}

int main()
{
    maxnumber(7, 9, 4);
    return 0;
}