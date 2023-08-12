#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** argv)
{
    string s;
    char c;
    cin >> s >> c;
    for(int i = 0; i < s.length(); i++) if(s[i] != c) cout << s[i];
}