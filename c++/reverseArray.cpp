// Reverse array take input as a string 
// HackerRank

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int n=0,k=0;
    string s,s1 = "",s2 = "";
    getline(cin, s);
    int size = s.length();
    for(int i=0;i<size;i++)
    {
        if(s[i] == ',')
        {
            break;
        }
        if(i > 3 )
        {
            s1 += s[i];
        }
    }
    n = stoi(s1);

    for(int i=11;i<size;i++)
    {
        if( s[i] != ' ' && s[i] != '=' )
        {
            
            s2 = s2 + s[i];

        }
    }
    k = stoi(s2);
    string str;
    getline(cin , str);
    int length = str.length();
    vector<int>array;
    string sss = "";
    for(int i=9;i<length;i++)
    {
        
        if(str[i] == ']')
        {
            int temp = stoi(sss);
            array.push_back(temp);
            break;
        }
        else if(str[i] == ',' )
        {
            int temp = stoi(sss);
            array.push_back(temp);
            sss = "";
        }
        else{
            sss += str[i];
        }
    }
    
    for(int i=k-1;i>=0;i--)
    {
        cout << array[i]<<" ";
    }
    for(int i=n-1;i>k-1;i--)
    {
        cout << array[i] << " ";
    }
    cout <<endl;
    return 0;
}