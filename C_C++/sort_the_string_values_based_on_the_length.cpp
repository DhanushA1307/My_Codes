#include<bits/stdc++.h>
using namespace std;


int main(int argc, char** argv)
{
    int N;
    map<int, string> mp;
    cin >> N;
    for(int i=0; i<N; i++)
    {
        string str;
        cin >> str;
        mp[str.length()] = str;
    }
    for(auto i : mp)
    {
        cout << i.second << endl;
    }
}