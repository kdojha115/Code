#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    for(int i=n;i<=m;i++)
    {
        int  f =0;
        for(int j=2;j*j<=i;j++)
        {
            if(i%j == 0){
                f = 1;
                //cout << i;
                break;
            }
        }
        if(f == 0)
        {
            cout << i<<"\n";
        }
    }
}