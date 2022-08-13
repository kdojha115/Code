#include<iostream>
#include<cmath>

using namespace std;

void convert(string s)
{
    int n = s.length();
    float num = 0,k;
    for(int i=0;i<n;i++)
    {
        if(s[i] =='.')
        {
            k = (i+1);
           // n = i+2;
            continue;
        }
        num = num*10 + ((int)s[i] - 48);

    }
    int c = pow(10,k);
    num = num/c;
    cout <<num<<endl;
}
int main()
{
    string s="23.456";
    //cin >>s;
    convert(s);
    return 0;
}