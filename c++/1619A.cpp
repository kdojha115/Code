#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >>s;
        int n = s.length();
        //cout << n <<endl;
        int flag = 1;
        if(n%2 == 0){
            for(int i=0;i<n/2;i++)
            {
                if(s[i] != s[(n/2)+i]){
                    flag = 0;
                    break;
                }
            }
            if(flag == 1){
                cout << "YES"<<endl;
            }
            else{
                cout << "NO"<<endl;
            }
        }
        else{
            cout <<"NO"<<endl;
        }
    }
}