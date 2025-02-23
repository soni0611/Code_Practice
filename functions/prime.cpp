#include <iostream>
using namespace std;

bool checkprime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    bool ans = checkprime(6);
    if (ans == true)
    {
        cout << "Prime Number "<< endl;
    }
    else{
        cout << "Not Prime";
    }
    return 0;
}