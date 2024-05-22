#include <iostream>
using namespace std;
// StartFahrenheitValue(S)
// EndFahrenheitvalue(E)
// StepSize(W)
int fahrenheit_to_celcius(int s, int e, int w)
{
    int c;
    while (s <= e)
    {
        c = (5 * (s - 32) / 9);
        cout << s << " " << c << endl;
        s += w;
    }
}

int main()
{
    int s, e, w;
    cin >> s >> e >> w;
    fahrenheit_to_celcius(s, e, w);
}