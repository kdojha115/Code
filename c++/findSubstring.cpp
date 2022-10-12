// Interview Question 
// Question : Find index of string in string array
// Example :  array[] = {"for","","","group","interview","","josh","","","technology","",""}
//            str = "technology"
//     output : 10;       

#include<iostream>
#include <string>
using namespace std;

int find(int low,int high,string array[],string str)
{
    
    int mid = (low + high) / 2;
    
    if(array[mid] == str)
    {
        return mid;
    }
    else if(array[mid] > str)
    {
        return find(low,mid,array,str);
    }
    else{
        return find(mid,high,array, str);
    }
    return -1;

}

int main() {
    string array[] = {"for","","","group","interview","","josh","","","technology","",""};
    string str = "technology";
    int n = sizeof(array)/sizeof(array[0]);
    int ans = find(0,n-1,array,str);
    
    cout << ans+1 <<endl;
    
    return 0;
}