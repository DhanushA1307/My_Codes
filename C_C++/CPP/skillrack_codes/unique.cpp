#include<bits/stdc++.h>
using namespace std;

vool cond(int N)
{
    string s = to_string(s);
    map<char, int> mp;
    for(char i : s) mp[i]++;
    int c = 0;
    for(auto i : mp) c += i.second;
    if(mp.size() == c) return true;
    return false;
}

int main(int argc, char** argv)
{
    int N1, N2, f = 0;
    cin >> f1 >> f2;
    while(N1 <= N2)
    {
        if(cond(N1))
        {
            cout << N1 << " ";
            f = 1;
        }
        N1++;
    }
    if(f == 0) cout << -1;
}
