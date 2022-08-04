#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int p = 0;
        for(int i=2;i*i<=n;i++)
        {
            if(n%i == 0)
            {
                p = 1;
                break;
            }
        }
        if(p == 1)
        {
            cout<<"Not prime";
        }
        else{
            cout << "Prime";
        }
        cout <<endl;
    }
}