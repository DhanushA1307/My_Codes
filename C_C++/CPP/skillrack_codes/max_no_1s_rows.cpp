#include<bits/stdc++.h>
using namespace std;

int _1(string s)
{
    int o = 0;
    for(char i : s) if(i == '1') o++;
    return o;
}

int main(int argc, char** argv)
{
    int N;
    cin >> N;
    vector<pair<int, int>> mp;
    for(int i = 1; i <= N; i++)
    {
        string s;
        cin >> s;
        int c = _1(s);
        mp.emplace_back(i,c);
    }
    sort(mp.begin(), mp.end(), [](const pair<int, int> a, const pair<int, int> b){
        return b.second >= a.second;
    });
    cout << mp[0].first << endl;
}