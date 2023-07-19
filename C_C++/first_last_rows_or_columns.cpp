#include<bits/stdc++.h>
using namespace std;

void col_print(vector<vector<int>> &mat, int f)
{
    for(int i = 0; i < mat.size(); i++)
    {
        cout << mat[f][i] << " ";
    }
}

void row_print(vector<vector<int>> &mat, int f)
{
    for(int i = 0; i < mat.size(); i++)
    {
        cout << mat[i][f] << " ";
    }
}

int main(int argc, char** argv)
{
    int N;
    cin >> N;
    /*vector<vector<int>> mat;
    for(int i = 0; i < N; i++) 
    {
        vector<int> rows, arr;
        for(int j = 0; j < N; j++)
        {
            int v;
            cin >> v;
            rows.push_back(v);
        }
        if(N % 2 == 0)
        {
            arr.push_back(rows[0]);
            arr.push_back(rows[rows.size()-1]);
        }
        else
        {
            if(i == 0 || i == N-1)
            {
                for(auto k : rows)
                {
                    arr.push_back(k);
                }
            }
        }
        mat.push_back(arr);
        arr.clear();
    }
    if(N % 2 == 0)
    {
        for(int i = 0; i < N/2; i++)
        {
            for(int j = 0; j < N; j++)
            {
                cout << mat[j][i] << " ";
            }
            cout << endl;
        }
    }
    else
    {
        for(auto i : mat)
        {
            for(auto j : i)
            {
                cout << j << " ";
            }
            cout << endl;
        }
    }*/
    vector<vector<int>> mat;
    for(int i = 0; i < N; i++)
    {
        vector<int> rows;
        for(int j = 0; j < N; j++)
        {
            int v;
            cin >> v;
            rows.push_back(v);
        }
        mat.push_back(rows);
    }
    if(N % 2 == 0)
    {
        col_print(mat,0);
        cout << endl;
        col_print(mat,N-1);
    }
    else
    {
        row_print(mat,0);
        cout << endl;
        row_print(mat,N-1);
    }
}