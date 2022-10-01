// Codeforces
// 1144 C. Two Shuffled Sequences

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);
    int duplicate = arr[0];

    vector<int> vector1;
    vector<int> vector2;

    vector2.push_back(arr[0]);
    int temp = 0;

    for (int i = 1; i < n; i++)
    {
        if (temp > 1)
        {
            break;
        }

        if (arr[i] == duplicate)
        {
            temp++;
            vector1.push_back(arr[i]);
        }
        else
        {
            temp = 0;
            vector2.push_back(arr[i]);
            duplicate = arr[i];
        }
    }

    if (temp < 2)
    {
        cout << "YES" << endl;
        cout << vector1.size() << endl;

        for (int i = 0; i < vector1.size(); i++)
        {
            cout << vector1[i] << " ";
        }

        cout << endl;
        cout << vector2.size() << endl;

        for (int i = vector2.size() - 1; i >= 0; i--)
        {
            cout << vector2[i] << " ";
        }
    }
    else
    {
        cout << "NO";
    }
    cout << endl;
    return 0;
}
