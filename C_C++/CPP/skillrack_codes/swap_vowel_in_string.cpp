#include<bits/stdc++.h>
using namespace std;

bool isvow(char c)
{
    switch(tolower(c))
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
    string s1, s2;
    cin >> s1 >> s2;

    vector<pair<int, char>> pr1, pr2;

    for(int i = 0; i < s1.length(); i++) if(isvow(s1[i])) pr1.emplace_back(i,s1[i]);

    for(int i = 0; i < s2.length(); i++) if(isvow(s2[i])) pr2.emplace_back(i,s2[i]);

    for(int i = 0; i < pr1.size(); i++)
    {
        s1[pr1[i].first] = pr2[i].second;
    }

    for(int i = 0; i < pr2.size(); i++)
    {
        s2[pr2[i].first] = pr1[i].second;
    }
    
    cout << s1 << " " << s2 << endl;
}