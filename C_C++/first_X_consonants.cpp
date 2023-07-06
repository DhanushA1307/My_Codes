#include<bits/stdc++.h>
using namespace std;

bool check(char c)
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

int main(int argc, char** argv)
{
    string s, s_c = "";
    int N, c = 0;
    cin >> s >> N;
    for(int i = 0; i < s.length(); i++)
    {
        if(!check(s[i]))
        {
            if(c != N)
            {
                s_c += s[i];
                c++;
            }
        }
    }
    if(c == N) cout << s_c;
    else cout << -1;
}