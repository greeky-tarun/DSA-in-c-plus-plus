#include <iostream>
using namespace std;

void printarray(int input[], int n)
{
    for (int i = 0; i <= n; i++)
    {
        cout << input[i] << " ";
    }
    cout << endl;
}

void increment(int a, int b[], int n)
{
    a++;
    b[0]++;
}

int main()
{
    int a = 10;
    int b[10] = {1, 2, 3};
    increment(a, b, 10);

    cout << "a :" << a << endl;
    cout << "b[0] :" << b[0] << endl;
    // int input[100] = {1, 2, 3};
    // printarray(input, 100);
}