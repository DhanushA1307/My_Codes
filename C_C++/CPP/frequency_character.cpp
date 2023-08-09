#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** argv)
{
    string str;
    cin >> str;
    map<char, int> mp;
    for(char i : str) mp[i]++;
    for(auto i : mp) cout << i.first << " " << i.second << endl;
}