#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** argv)
{
    int N, p = 0, n = 0;
    map<int, int> mp;
    for(int i = 1; i <= N; i++)
    {
        int v;
        cin >> v;
        mp[v]++;
    }
    for(auto i : mp)
    {
        if(i.second == 1)
        {
            if(i.first > 0)
                p += i.first;
            else
                n += i.first;
        }
    }
    cout << p + (-1*n);
    return 0;
}
