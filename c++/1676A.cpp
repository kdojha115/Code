#include<iostream>
using namespace std;


int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        char str[6];
        int x =0,y=0;
        for(int i=0;i<6;i++)
        {
            cin >> str[i];
            if(i<3){
                x += int(str[i]);
            }else{
                y += int(str[i]);
            }
        }
        if(x == y){
            cout<<"YES"<<endl;
        }else{
            cout <<"NO"<<endl;
        }
    }
    return 0;
}