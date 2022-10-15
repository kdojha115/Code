// Google Kickstart round D
// Question : Walktober

#include<iostream>
#include<vector>

using namespace std;

int difference(vector<vector<int> > scores ,int m, int n, int p)
{
    int less = 0, i = 0, j = 0, maxValue = 0;
    while(j < n)
    {
        if(maxValue < scores[i][j])
        {
            maxValue = scores[i][j];
        }
        if(i == m-1)
        {
            if(scores[p-1][j] < maxValue )
            {
                less += maxValue - scores[p-1][j];
            }
            i = 0;
            maxValue = 0;
            j++;
        }
        else{
            i++;
        }
    }
    return less;
}

int main()
{
    int t;
    cin >> t;
    int k =1;
    while(t--)
    {
        int m,n,p;
        cin >> m >> n >> p;
        vector<vector<int > > scores;
        for(int i=0;i<m;i++)
        {
            vector<int> input;
            for(int j=0;j<n;j++)
            {
                int temp;
                cin >> temp;
                input.push_back(temp);
            }
            scores.push_back(input);
        }
        int lessScore = 0;
        if(m == 2)
        {
            for(int i=0;i<n;i++)
            {
                if(scores[p-1][i] < scores[m-p][i])
                {
                    lessScore += scores[m-p][i] - scores[p-1][i];
                }
            }
        }
        else{
            lessScore = difference(scores, m, n, p);
        }
        cout <<  "Case #"<< k <<": "<<lessScore <<endl;
        k++;
    } 
    return 0;
}