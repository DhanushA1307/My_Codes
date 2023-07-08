#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** argv)
{
    int M, N;
    vector<vector<int>> mat;
    cin >> M >> N;
    for(int i = 0; i < M; i++)
    {
        vector<int> row;
        for(int j = 0; j < N; j++)
        {
            int a;
            cin >> a;
            row.push_back(a);
        }
        reverse(row.begin(), row.end());
        mat.push_back(row);
    }
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            cout << mat[j][i] << " ";
        }
        cout << endl;
    }
}