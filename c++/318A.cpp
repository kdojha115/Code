#include<iostream>

using namespace std;

int main()
{
    long long int n, k;
    cin >> n >> k;
    long long int even = n/2, odd = n - even, ans;
    if(k <= odd)
    {
        ans = (k*2) -1;
    }
    else{
        k = k - odd;
        ans = k*2;
    }
    cout << ans <<endl;
    return 0;
}