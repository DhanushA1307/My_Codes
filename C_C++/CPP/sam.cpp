#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** argv)
{
    string s1, s2;
    cin >> s1 >> s2;
    int c1 = 0, c2 = 0;
    map<char, vector<int>> v;
    for(int i = 0; i < s1.length(); i++)
    {
        if(s1[i] == s2[i])
        {
            c1++;
        }
        if(s1[i] != s2[i])
        {
            c2++;
        }
    }
    /*for(int i = 0; i < s2.length(); i++)
    {
        if(s1[i] != s2[i]) 
        {
            v[s2[i]].push_back(i);
        }
    }
    for(auto i : v)
    {
        cout << i.first << "->";
        vector<int> s = i.second;
        for(auto j : s)
        {
            cout << j << " ";
        }
        if(s.size() == 2)
        {
            if(s[0] != s[1])
            {
                c2++;
            }
        }
        cout << endl;
    }*/
    cout << c1 << " " << c2 << endl;
}