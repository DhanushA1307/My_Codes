#include<bits/stdc++.h>
using namespace std;

bool vow(char c)
{
    switch (tolower(c))
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
int main(int argc, char** argv)
{
    string s;
    cin >> s;
    for(int i = 0; i < s.length(); i++)
    {
        if(isdigit((int(s[i]) - 48)) || vow(s[i]))
        {
            cout << "*";
        }
        else
        {
            cout << s[i];
        }
    }
}