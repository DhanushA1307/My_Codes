#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** argv)
{
    int i = 0, n = 2;
    string s;
    cin >> s;
    while(i < s.length())
    {
        cout << s[i];
        i += n;
        n++;
    }
}
