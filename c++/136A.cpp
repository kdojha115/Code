// Codeforces
// 136 A. Presents

#include <iostream>

using namespace std;

void selectionSort(int a[], int n)
{
    int i, j, min, temp;
    for (i = 0; i < n - 1; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
            if (a[j] < a[min])
                min = j;
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n], ans[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        ans[i] = arr[i];
    }
    selectionSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == ans[j])
            {
                cout << j + 1 << " ";
            }
        }
    }
    cout << endl;
    return 0;
}