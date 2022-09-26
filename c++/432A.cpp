// Codeforces
// 432 A. Choosing Teams

#include <iostream>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    for (int i = 0; i < n; i++)
        arr[i] = 5 - arr[i];
    
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= k)
            c++;
        
    }

    cout << c / 3 << endl;
    return 0;
}