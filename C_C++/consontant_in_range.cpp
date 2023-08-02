#include <bits/stdc++.h>

using namespace std;

bool vow(char c)
{
    switch(c)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            return true;
    }
    return false;
}

string print(char c1, char c2)
{
    string s = "";
    while(c1 <= c2)
    {
        if(!vow(c1))
        {
            s += c1;
            s += char(32);
        }
        c1++;
    }
    return s;
}

int main()
{
    char c1, c2;
    cin >> c1 >> c2;
    if(c1 <= c2)
    {
        string p = print(c1, c2);
        cout << p;
    }
    else
    {
        string p = print(c2,c1);
        reverse(p.begin(), p.end());
        cout << p;
    }
    return 0;
}
