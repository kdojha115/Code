// Codeforces
// 137 A. Password 

#include<iostream>

using namespace std;

int main()
{
    int testCase;
    cin >> testCase;
    while(testCase--)
    {
        int number;
        cin >> number;
        int array[number];
        for(int index = 0;index < number ;index++)
        {
            cin >> array[index];
        }
        int result = 0;
        int requiredNumber = 10-number-1;
        while(requiredNumber > 0)
        {
            result += requiredNumber * 6;
            requiredNumber--;
        }
        cout << result<<endl;
    }
    return 0;
}