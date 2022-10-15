// Google Kickstart round G
// Question : Happy Subarrays

#include<iostream>
#include<vector>

using namespace std;

int findSumOfHappySubArrays(int n, vector<int> array)
{
    int sum = 0;
    for(int i=0;i<n;i++)    
    {
        int add = 0;
        for(int j=i;j<n;j++)
        {
            if(array[j] < 0 && (add + array[j]) < 0)
            {
                break;
            }
            else{
                add += array[j];
            }
            sum += add;
        }

    }
    return sum;
}

int main()
{
    int t;
    cin >> t;
    int k = 1;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int>array;
        for(int i=0;i<n;i++)
        {
            int temp;
            cin >> temp;
            array.push_back(temp);
        }
        int result = findSumOfHappySubArrays(n,array);

        cout << "Case #" << k << ": " << result <<endl;
        k++;
    }
    return 0;
}