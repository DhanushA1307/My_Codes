#include<bits/stdc++.h>
using namespace std;

bool desc(const pair<int, int> &a, const pair<int, int> &b)
{
    return a.second > b.second;
}

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
    sort(rows.begin(), rows.end(), desc);
    if(!rows.empty())
    {
        cout << rows[0].second;
    }
    else
    {
        cout << "-1";
    }
}