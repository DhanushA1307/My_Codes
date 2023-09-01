#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** argv)
{
    string s, c = "";
    char a, b;
    int count = 0;
    cin >> s >> a >> b;
    c += a;
    c += b;
    for(int i = 0; i < s.length(); i++)
    {
        string sub = s.substr(i,c.length());
        if(sub == c)
        {
            count++;
        }
    }
    cout << count;
}