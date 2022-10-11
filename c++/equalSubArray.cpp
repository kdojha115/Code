// Interview question
// question : - Find array subsets sum are equal or not
// example : - array : [1,5,11,5]
// output : true
// Explanation : array subsets = [1,5,5] , [11]
//                first subsets sum=   1 + 5 + 5 = 11 ==  Second subsets 11

#include <bits/stdc++.h>
using namespace std;

int findSplitPoint(int arr[], int n)
{
    int leftSum = 0;
    for (int i = 0; i < n; i++)
    {
        leftSum += arr[i];
        int rightSum = 0;
        for (int j = i + 1; j < n; j++)
            rightSum += arr[j];
        if (leftSum == rightSum)
            return i + 1;
    }
    return -1;
}

bool printTwoParts(int arr[], int n)
{
    int splitPoint = findSplitPoint(arr, n);

    if (splitPoint == -1 || splitPoint == n)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    int arr[1000], k = 0, n = 0;

    while (1)
    {

        n++;
        cin >> arr[k];
        if (cin.get() == '\n')
        {
            break;
        }
        k++;
    }
    sort(arr, arr + n);
    bool ans = printTwoParts(arr, n);
    if (ans == 1)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
    return 0;
}
