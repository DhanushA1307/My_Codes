#include<bits/stdc++.h>
using namespace std;

void print(int i, string &s)
{
    while(i < s.length())
    {
        cout << '*';
        i++;
    }
}

int main(int argc, char** argv)
{
    string s;
    cin >> s;
    int v = 1;
    if(s[0] == '-')
    {
        v = -1*(int(s[1]) - 48);
    }
    else
    {
        v = int(s[0]) - 48;
    }
    if(v % 2 == 0)
    {
        if(s[0] == '-')
        {
            print(1,s);
        }
        else
        {
            print(0,s);
        }
    }
    else
    {
        cout << s;
    }
}