#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    string s, integer = "";
    cin >> s;
    vector<char> c;
    vector<int> in;
    
    for(int i = 0; i < s.length(); i++)
    {
        if(tolower(s[i]) >= 'a' && tolower(s[i]) <= 'z')
        {
            c.push_back(s[i]);
            in.push_back(stoi(integer));
            integer = "";
        }
        else
        {
            integer += s[i];
        }
    }
    for(int i = 0; i < integer.size(); i++)
    {
        for(int j = 0; j < integer[i]; j++)
        {
            cout << c[i];
        }
    }
}