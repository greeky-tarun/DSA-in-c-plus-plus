#include <iostream>
using namespace std;
void printArray(int input[], int n)
{
    // cout << "Function: " << sizeof(input) << endl;
    cout << "Print: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << input[i] << " ";
    }
    cout << endl;
}
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    int input[100];

    // 0th location memory address
    cout << input << endl;
    cout << "Enter array elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Index " << i << " : ";
        cin >> input[i];
    }
    // cout << "Main: " << sizeof(input) << endl;
    printArray(input, n);
}