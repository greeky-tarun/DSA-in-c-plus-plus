/*
Sample Input 2:
2
9
9 3 6 12 4 32 5 11 19
4
1 2 3 4
Sample Output 2 :
3 9 12 6 32 4 11 5 19
2 1 4 3
*/

#include <iostream>
using namespace std;

void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void reversealternative(int a[], int n)
{
    for (int i = 0; i < n - 1; i += 2)
    {
        int temp = a[i];
        a[i] = a[i + 1];
        a[i + 1] = temp;
    }
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
        reversealternative(arr, n);
        printArray(arr, n);
    }
    return 0;
}