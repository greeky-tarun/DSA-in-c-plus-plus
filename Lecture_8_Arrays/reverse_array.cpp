#include <iostream>
using namespace std;

void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "";
    }
    cout << endl;
}

void reverse(int a[], int n)
{
    int i = 0, j = n - 1;
    while (i < j)
    {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }
}

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    reverse(a, 5);
    printArray(a, 5);
}