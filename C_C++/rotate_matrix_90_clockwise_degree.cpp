#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** argv)
{
    int M, N;
    vector<int> rows;
    vector<vector<int>> mat, sol;
    for(int i = 0; i < M; i++)
    {
        for(int j = 0; j < N; j++)
        {
            int val;
            cin >> val;
            rows.push_back(val);
        }
        mat.push_back(rows);
        rows.clear();
    }
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++) rows.push_back(mat[j][i]);
        reverse(rows.begin(), rows.end());
        sol.push_back(rows);
        rows.clear();
    }
    for(auto i : sol)
    {
        for(auto j : i) cout << j << " ";
        cout << endl;
    }
}