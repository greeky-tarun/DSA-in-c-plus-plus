#include <bits/stdc++.h>
using namespace std;
int Linearsearch(int array[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (array[i] == x)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int t;
    // test cases
    cout << "Test cases: ";
    cin >> t;
    while (t--)
    {
        int n;
        // array elements
        cout << "Number of elements: ";
        cin >> n;
        int array[n];
        for (int i = 0; i < n; i++)
        {
            cin >> array[i];
        }
        int x;
        // value for search
        cout << "element to search: ";
        cin >> x;
        int result = Linearsearch(array, n, x);
        if (result == -1)
        {
            cout << "element " << x << " is not present in array" << endl;
        }
        else
        {
            cout << "element " << x << " is present in array at index: " << result << endl;
        }
    }
    return 0;
}