// GOCC15: Google SWE Online Coding Challenge Internship 2021
// 2. Divisibility Count: Find the number of N digit integers divisible by both X and Y, print answer modulo 10^9+7
//

#include<iostream>
#include<algorithm>
#include<cmath>

using namespace std;

int divisibility(int n, int x, int y)
{
    if(n == 0)
    {
        return 0;
    }
    int limit = pow(10,n),i=0,count = 0, temp = 0;
    while(temp<=limit)
    {
        i++;
        if((i*x)%y == 0)
        {
            count++;
        }
        temp = x*(i+1);
    }
    return count%(1000000007);
}

int main()
{
    int n,x,y;
    cin >> n >> x >> y;
    int ans = divisibility(n,x,y);
    cout << ans << endl;
    return 0;
}