#include <iostream>
using namespace std;

bool fibbo(int n)
{
    int a = 0, b = 1, c = 0;
    while (c < n)
    {
        c = a + b;
        a = b;
        b = c;
    }
    if (c == n)
    {
        return true;
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    if (fibbo(n))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
}