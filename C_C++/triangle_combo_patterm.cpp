#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** argv)
{
    string s;
    cin >> s;
    for(int i = s.length()-1, f = 0; i >= 0; i--)
    {
        for(int j = 0; j < i; j++)
        {
            cout << s[i];
        }
        for(int k = 0; k <= f; k++)
        {
            cout << s[f];
        }
        f++;
        cout << endl;
    }
}