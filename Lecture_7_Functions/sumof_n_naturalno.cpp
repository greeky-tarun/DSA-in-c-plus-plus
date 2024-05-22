#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sumofnat = 0;
    for (int i = 1; i <= n; i++)
    {
        sumofnat += i;
    }
    cout << sumofnat;
}