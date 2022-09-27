// leetcode
// 414. Third Maximum Number

#include <iostream>

using namespace std;

int thirdMax(int size,int array[size])
{
    int count=1;
    sort(array,array+size);
    int compare = array[size-1];
    for (int i = size-2; i >= 0; i--)
    {
        if (compare != array[i]){
            count++;
            compare = array[i];
        }
        if(count == 3)
            return array[i];
        
    }
    return array[size-1];
}

int main()
{
    int n;
    cin >> n;
    int nums[n];

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int k = thirdMax(n,nums);
    cout << k << endl;

    return 0;
}


