// Codeforces
// 144 A.Arrival of the General

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    int max = arr[0], xin = 0;
    int min = arr[0], nin = 0;

    for (int i = 0; i < n; i++)
    {

        if (max < arr[i])
        {
            max = arr[i];
            xin = i;
        }

        if (min >= arr[i])
        {
            min = arr[i];
            nin = i;
        }

    }

    int d = 0;
    d += xin;
    d += (n - 1) - nin;

    if (xin > nin)
    {
        d--;
    }

    cout << d << endl;
    return 0;
}