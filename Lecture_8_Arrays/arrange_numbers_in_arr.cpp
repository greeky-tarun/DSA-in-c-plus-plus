#include <iostream>
using namespace std;

void arrange(int *arr, int n)
{
    int start = 0;
    int end = n - 1;
    int val = 1;

    while (start <= end)
    {
        if (start == end)
        {
            arr[start] = val;
            break;
        }
        arr[start] = val;
        val++;
        arr[end] = val;
        val++;
        start++;
        end--;
    }
}

int main()
{
    int t;
    cout << "number of test cases: ";
    cin >> t; // number of test cases
    while (t--)
    {
        int n;
        cout << "enter size of the array: ";
        cin >> n;
        int arr[n];
        arrange(arr, n);
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}