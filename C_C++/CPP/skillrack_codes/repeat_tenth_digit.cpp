#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** argv)
{
    string s;
    cin >> s;

    int c = int(s[s.length()-2]) - 48;
    for(int i = 0; i < s.length(); i++) 
    {
        for(int j = 0; j < c; j++)
        {
            cout << s[i];
        }
    }
}
