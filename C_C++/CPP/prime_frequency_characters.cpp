#include<bits/stdc++.h>
using namespace std;

bool prime(int c)
{
    if(c <= 1) return false;
    if(c == 2 || c == 3) return true;
    if(c % 2 == 0 || c % 3 == 0) return false;
    for(int i = 5; i*i <= c; i += 6) if(c % i == 0 || c % (i+2) == 0) return false;
    return true;
}

int main(int argc, char** argv)
{
    string s;
    map<char, int> mp;
    int count = 0;
    
    cin >> s;
    for(char i : s) mp[i]++;
    for(auto i : mp) if(prime(i.second)) count++;
    if(count != 0) cout << "YES";
    else cout << "NO";
}