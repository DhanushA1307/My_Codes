#include <bits/stdc++.h>

using namespace std;

bool vow(char c)
{
    switch(tolower(c))
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

int main()
{
    string s;
    getline(cin,s);
    int v = 0;
    for(int i = 0; i < s.length(); i++) if(vow(s[i])) v++;
    for(int i = 1; i <= v; i++)
    {
        for(int j = 0, k = 0; j < s.length(); j++)
        {
            if(vow(s[j]) && k < i)
            {
                cout << "[" << s[j] << "]";
                k++;
            }
            else
            {
                cout << s[j];
            }
        }
        cout << endl;
    }
    return 0;
}