// Codeforces
// 368 A. Sereja and Coat Rack

#include <iostream>

using namespace std;

int main()
{
    int n, ruble, guest;
    cin >> n >> ruble;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> guest;
    int sum= 0;
    sort(arr, arr + n);
    int size = min(guest, n);
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    if (guest > n)
    {
        sum -= (ruble* (guest- n));
    }
    cout << sum << endl;
    return 0;
}