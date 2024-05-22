#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int input[100];
    // taking input of array
    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }
    // output of array
    for (int i = 0; i < n; i++)
    {
        cout << "index " << i << " : ";
        cout << input[i] << endl;
    }
}