#include<bits/stdc++.h>
using namespace std;

vector<int> solve(string s)
{
    vector<int> c;
    int n = 0;
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == char(32))
        {
            c.push_back(n);
            n = 0;
        }
        else
        {
            n = n * 10 + (int(s[i]) - 48);
        }
    }
    c.push_back(n);
    return c;
}

int main(int argc, char** argv)
{
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);

    vector<int> v1, v2;
    
    v1 = solve(s1);
    v2 = solve(s2);

    for(auto i : v1)
    {
        cout << i << " ";
    }
}