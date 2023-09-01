#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<string> v;
    for(int i = 0; i < N; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }
    
    for(int i = 0; i < v[0].length(); i++)
    {
        map<char, int> mp;
        for(int j = 0; j < N; j++)
        {
            mp[v[j][i]]++;
        }
        for(auto k : mp)
        {
            if(k.second == N)
            {
                cout << k.first;
            }
        }
    }
    return 0;
}
