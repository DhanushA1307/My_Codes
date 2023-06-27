#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** argv)
{
    int R, C;
    cin >> R >> C;
    int mat[R][C];
    for(int i = 0; i < R; i++) for(int j = 0; j < C; j++) cin >> mat[i][j];
    vector<int> rows;
    for(int i = 0; i < C; i++)
    {
        int c = 0;
        for(int j = 0; j < R; j++)
        {
            if(mat[j][i] < 0)
            {
                c++;
            }
        }
        if(c != 0)
        {
            rows.push_back(i+1);
        }
    }
    if(!rows.empty())
    {
        cout << *max_element(rows.begin(), rows.end());
    }
    else
    {
        cout << "-1";
    }
}