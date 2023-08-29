#include <bits/stdc++.h>

using namespace std;

int main()
{
    long N;
    cin >> N;
    map<long, long> mp;
    vector<int> sq, cu;
    for(int i = 1; i <= N; i++)
    {
        sq.push_back(i*i);
        cu.push_back(i*i*i);
    }
    for(auto i : sq) mp[i]++;
    for(auto i : cu) mp[i]++;
    for(auto i : mp) if(i.first <= N) cout << i.first << " ";
    return 0;
}