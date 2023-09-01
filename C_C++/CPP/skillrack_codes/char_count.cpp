#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    char c;
    int count = 0;
    getline(cin, s);
    cin >> c;
    for(int i = 0, i < s.length(); i++)
    {
        if(s[i] == c)
        {
            count++;
        }
    }
    cout << count
    return 0;
}