// Floor Number

#include<iostream>

using namespace std;

int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int n,x;
        cin>> n >>x;

        int s = 2,ans = 1;
        n -=2;

        if(n>0 && n%x != 0){
            ans += n/x +1 ;            
        }
        else if(n > 0 && n%x == 0)
        {
            ans += n/x;
        }

        cout << ans <<endl;

        return 0;
    }
}