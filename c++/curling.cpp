// Google Kickstart round D
// Question : Curling

#include<iostream>
#include<stack>
#include<vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int k = 1;
    while(t--)
    {
        int rs,rh;
        cin >> rs >> rh;
        int n;
        cin >> n;
        stack<pair< int , int > > redStack;
        stack<pair< int , int > > yellowStack;  
        for(int i=0;i<n;i++)
        {
            int x, y;
            cin >> x >> y;
            redStack.push({abs(x), abs(y)});
        }
        int m;
        cin >> m;
        for(int i = 0;i< m; i++)
        {
            int x, y ;
            cin >> x >> y;
            yellowStack.push({abs(x), abs(y)});
        }
        vector<int> redVector1;
        vector<int> redVector2;
        //cout << redStack.size() <<endl;
        while(!redStack.empty())
        {
            int x = redStack.top().first;
            int y = redStack.top().second;
            if(x > y)
            {
                redVector1.push_back(x);    // 1 3
                redVector2.push_back(y);    // 0 0
            }
            else
            {
                redVector1.push_back(y);
                redVector2.push_back(x);
            }
            redStack.pop();
        }
        vector<int> yellowVector1;
        vector<int> yellowVector2;
        while(!yellowStack.empty())
        {
            int x = yellowStack.top().first;
            int y = yellowStack.top().second;
            if(x > y)
            {
                yellowVector1.push_back(x);   // 2
                yellowVector2.push_back(y);   // 0
            }
            else
            {
                yellowVector1.push_back(y);
                yellowVector2.push_back(x);
            }
            yellowStack.pop();
        }
        //cout << redVector1.size() <<endl;
        int resultRed = 0;   // 1 
        for(int i=0;i<redVector1.size();i++)
        {
            //cout << redVector1[i] << " ";
            if(redVector1[i] <= rh)   
            {
                resultRed++;
            }
            else if(redVector1[i] <= rs+rh && redVector2[i] == 0)
            {
                resultRed++;
            }
        }//cout << endl;
        int resultYellow = 0;
        for(int i=0;i<yellowVector1.size();i++)
        {
            if(yellowVector1[i] <= rh)
            {
                resultYellow++;
            }
            else if(yellowVector1[i] <= rs+rh && yellowVector2[i] == 0)
            {
                resultYellow++;
            }
        }
        if(resultYellow < resultRed)
        {
            resultRed -= resultYellow;
            resultYellow  = 0;
        }
        else{
            resultYellow -= resultRed;
            resultRed = 0;
        }
        cout<< "Case #"<<k <<": " << abs(resultRed) << " " << abs(resultYellow) <<endl;
        k++;
    }
    return 0;
}