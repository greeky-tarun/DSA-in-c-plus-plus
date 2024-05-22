#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number";
    cin >> n;

    int d = 2;
    bool divided = false;
    while (d < n)
    {
        if (d % n == 0)
        {
            cout << "not prime" << endl;
            divided = true;
        }
        d += 1;
    }
    if (!divided)
    {
        cout << "prime" << endl;
    }
}