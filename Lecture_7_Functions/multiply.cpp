#include <iostream>
using namespace std;

int mul(int m, int n)
{
    int mul = m * n;
    return mul;
}

int main()
{
    int m, n;
    cin >> m >> n;
    int ans = mul(m, n);
    cout << ans << endl;
}