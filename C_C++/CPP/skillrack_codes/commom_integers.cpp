#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** argv)
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if(a >= b) swap(a,b);
    if(c >= d) swap(c,d);
    map<int, int> mp;
    vector<int> v;
    while(a <= b)
    {
        mp[a]++;
        a++;
    }
    while(c <= d)
    {
        mp[c]++;
        c++;
    }
    for(auto i : mp)
    {
        if(i.second == 1)
        {
            v.push_back(i.first);
        }
    }
    if(v.empty()) cout << "-1";
    else for(auto i : v) cout << i << " ";
}