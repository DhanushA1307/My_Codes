#include<bits/stdc++.h>
using namespace std;


int main(int argc, char** argv)
{
    int R, C, K;
    cin >> R >> C >> K;
    vector<vector<int>> vec;
    for(int i = 0; i < R; i++)
    {
        vector<int> rows;
        for(int j = 0; j < C; j++)
        {
            int val;
            cin >> val;
            for(int k = 0; k < K; k++) rows.push_back(val);
        }
        vec.push_back(rows);
    }

    for(int i = 0; i < vec.size(); i++)
    {
        for(int j = 0; j < K; j++)
        {
            for(int k = 0; k < vec[i].size(); k++) 
            {
                cout << vec[i][k] << " ";
            }
            cout << endl;
        }
    }
}