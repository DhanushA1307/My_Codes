#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** argv)
{
    int N, c = 0;
    cin >> N;
    map<int,int> mp;
    while(N--)
    {
        int x;
        cin >> x;
        for(int i = 1; i <= x; i++)
        {
            if(x % i == 0)
            {
                mp[i]++;
            }
        }
    }
    for(auto i : mp)
    {
        if(i.first != 1 && i.second >= 2)
        {
            c++;
        }
    }
    cout << c;
}