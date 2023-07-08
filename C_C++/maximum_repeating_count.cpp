#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** argv)
{
    int N;
    map<int, int> mp;
    vector<pair<int, int>> pr;
    while(cin >> N) mp[N]++;
    for(auto i : mp) pr.emplace_back(i.first, i.second);
    sort(pr.begin(), pr.end(), [](pair<int, int> a, pair<int, int> b){return a.second > b.second;});
    cout << pr[0].first;
}