#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** argv)
{
    string s, f = "";
    int a, b;
    cin >> s >> a >> b;
    while(true)
    {
        if(f.length() >= b)
        {
            cout << ((f[a-1] == f[b-1]) ?"YES": "NO");
            break;
        }
        else
        {
            f += s;
        }
    }
}