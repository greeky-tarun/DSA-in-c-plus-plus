#include <iostream>
using namespace std;
int main()
{
    int n, i, s = 0;
    cin >> n;
    for (i = 0; i <= n; i += 2)
    {
        s = s + i;
    }
    cout << s;
    return 0;
}