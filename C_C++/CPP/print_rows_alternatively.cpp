#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> input(int R, int C)
{
    vector<vector<int>> mat;
    for(int i = 0; i < R; i++)
    {
        vector<int> rows;
        for(int j = 0; j < C; j++)
        {
            int val;
            cin >> val;
            rows.push_back(val);
        }
        mat.push_back(rows);
    }
    return mat;
}

int main(int argc, char** argv)
{
    int R, C;
    cin >> R >> C;
    vector<vector<int>> mat1, mat2;
    mat1 = input(R, C);
    mat2 = input(R, C);
    for(int i = 0; i < R; i++)
    {
        for(int j = 0; j < C; j++) 
        {
            cout << ((i % 2 == 0) ? mat1[i][j] : mat2[i][j]) << " ";
        }
        cout << endl;
    }
}