#include<iostream>

using namespace std;

int main()
{
    int nums[] = {2,0,2,1,1,0};
    
    int s = nums.size();
    int z =0,o=0,t=0;
    for(int i=0;i<nums.length();i++)
    {
        if(nums[i] == 0)
        {
            z++;
        }else if(nums[i] == 1){
            o++;
        }
        else{
            t++;
        }
    }
    for(int i=0;i<z;i++)
    {
        cout << 0<<" ";
    }
    for(int i=0;i<o;i++)
    {
        cout << 1 <<" ";
    }
    for(int i =0;i<t;i++)
    {
        cout << 2 << " ";
    }

}