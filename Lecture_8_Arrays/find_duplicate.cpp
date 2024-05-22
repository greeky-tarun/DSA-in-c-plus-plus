#include <iostream>
using namespace std;

int findDuplicate(int arr[], int size)
{
    int sumOfAll = 0;
    int sumOfArray = 0;

    // Calculate the sum of all unique numbers from 0 to size-2
    for (int i = 0; i < size - 1; i++)
    {
        sumOfAll += i;
    }

    // Calculate the sum of all numbers in the array
    for (int i = 0; i < size; i++)
    {
        sumOfArray += arr[i];
    }

    // The difference between sumOfArray and sumOfAll gives the duplicate number
    return sumOfArray - sumOfAll;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        cout << findDuplicate(arr, n) << endl;
    }

    return 0;
}
