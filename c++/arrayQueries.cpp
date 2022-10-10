// HackerEarth
// Language: C++17
// Array queries

//#include<bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int find(int n, int m, vector<int> a, vector<int> b, vector<int> result)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            sum += a[i] * b[j] * (i + j + 2);
        }
    }
    return sum;
}

vector<int> array_queries(int n, int m, vector<int> a, vector<int> b, int q, vector<vector<int>> queries)
{
    vector<int> result;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            sum += a[i] * b[j] * (i + j + 2);
        }
    }
    result.push_back(sum);
    for (int i = 0; i < q; i++)
    {

        int sum = 0;
        int ty = queries[i][0], q1 = queries[i][1], q2 = queries[i][2];
        if (ty == 1)
        {
            int temp = a[q1 - 1];
            a[q1 - 1] = b[q2 - 1];
            b[q2 - 1] = temp;
        }
        else if (ty == 2)
        {
            int temp = a[q1 - 1];
            a[q1 - 1] = a[q2 - 1];
            a[q2 - 1] = temp;
        }
        else
        {
            int temp = b[q1 - 1];
            b[q1 - 1] = b[q2 - 1];
            b[q2 - 1] = temp;
        }
        int arr = find(n, m, a, b, result);
        result.push_back(arr);
    }
    return result;
}

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for (int t_i = 0; t_i < T; t_i++)
    {
        int N;
        cin >> N;
        int M;
        cin >> M;
        vector<int> A(N);
        for (int i_A = 0; i_A < N; i_A++)
        {
            cin >> A[i_A];
        }
        vector<int> B(M);
        for (int i_B = 0; i_B < M; i_B++)
        {
            cin >> B[i_B];
        }
        int Q;
        cin >> Q;
        vector<vector<int>> queries(Q, vector<int>(3));
        for (int i_queries = 0; i_queries < Q; i_queries++)
        {
            for (int j_queries = 0; j_queries < 3; j_queries++)
            {
                cin >> queries[i_queries][j_queries];
            }
        }

        vector<int> out_;
        out_ = array_queries(N, M, A, B, Q, queries);
        cout << out_[0];
        for (int i_out_ = 1; i_out_ < out_.size(); i_out_++)
        {
            cout << " " << out_[i_out_];
        }
        cout << "\n";
    }
}
