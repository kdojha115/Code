//Codeforces
// 228 A.Is your horseshoe on the other hoof?


#include <iostream>

using namespace std;

int main()
{
    int arr[4] ;
    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }
    int d = 0;
    for (int i = 0; i < 4; i++)
    {
        int j;
        for (j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                break;
            }
        }

        if (i == j)
        {
            d++;
        }
    }
    cout << 4 - d << endl;
}