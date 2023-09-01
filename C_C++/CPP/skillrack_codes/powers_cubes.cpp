#include <bits/stdc++.h>

using namespace std;

int main()
{
    long N;
    cin >> N;
    for(long i = 1; i <= N; i++)
    {
        int s = 0, c = 0;
        long sq = (long)sqrt(i), cu = (long)cbrt(i);
        if(sq*sq == i) s = 1;
        if(cu * cu * cu == i) c = 1;
        if(s || c) cout << i << " ";
    }
    /*map<long, long> mp;
    vector<int> sq, cu;
    for(int i = 1; i <= N; i++)
    {
        sq.push_back(i*i);
        cu.push_back(i*i*i);
    }
    for(auto i : sq) mp[i]++;
    for(auto i : cu) mp[i]++;
    for(auto i : mp) if(i.first <= N) cout << i.first << " ";*/
    return 0;
}