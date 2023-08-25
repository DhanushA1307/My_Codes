#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** argv)
{
    string s;
    cin >> s;
    map<char, int> mp;
    for(char i : s) mp[i]++;
    vector<pair<char, int>> pr;
    for(auto i : mp) pr.emplace_back(i.first, i.second);
    sort(pr.begin(), pr.end(), [](pair<char, int> a, pair<char, int> b) {
        return a.first > b.first;
    });
    for(auto i : pr) cout << i.first;
}