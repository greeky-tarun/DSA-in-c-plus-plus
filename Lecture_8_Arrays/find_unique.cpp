#include <iostream>
using namespace std;

// void printArray(int a[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << a[i] << " ";
//     }
//     cout << endl;
// }

int findUnique(int a[], int n)
{
    int result = 0;
    for (int i = 0; i < n; i++)
    {
        result ^= a[i];
    }
    return result;
}

int main()
{
    int t;
    cout << "Enter number of test cases: ";
    cin >> t;
    while (t--)
    {
        int n;
        cout << "Enter array size :";
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout << findUnique(arr, n) << endl;
        // printArray(arr, n);
    }
    return 0;
}