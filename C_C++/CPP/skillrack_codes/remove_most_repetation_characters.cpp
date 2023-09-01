#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** argv)
{
    string s;
    cin >> s;

    map<char, int> mp;
    for(int i = 0; i < s.length(); i++) 
    {
        mp[s[i]]++;
    }

    int f = 0, se = 0;
    for(auto i : mp)
    {
        f++;
        if(i.second == 1)
        {
            se++;
        }
    }
    if(f == se)
    {
        cout << s;
    }
    else
    {
        vector<pair<char, int>> pr;
        
        for(auto i : mp) pr.emplace_back(i.first, i.second);

        sort(pr.begin(), pr.end(), [](const pair<char, int> &a, const pair<char, int> &b){ return a.second >= b.second;});

        char c = pr[0].first;

        vector<char> v;
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] != c)
            {
                v.push_back(s[i]);
            }
        }

        if(v.empty())
        {
            cout << -1;
        }
        else
        {
            for(int i = 0; i < v.size(); i++)
            {
                cout << v[i];
            }
        }
    }
}