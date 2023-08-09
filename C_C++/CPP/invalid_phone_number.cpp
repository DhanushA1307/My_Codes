#include<bits/stdc++.h>
using namespace std;

bool valid(string &str)
{
    int c = 0;
    map<char, int> mp;
    for(auto i : str) 
    {
        mp[i]++;
    }
    for(auto i : mp)
    {
        if(i.first >= '0' && i.second <= '9')
        {
            c++;
        }
    }
    if(c == 10 && str.length() == 10)
    {
        return true;
    }
    return false;
}

int main(int argc, char** argv)
{
    int count = 0;
    string str, s2 = "q", s1 = "Q";
    while(cin >> str)
    {
        if(s1 == str || s2 == str)
        {
            break;
        }
        else
        {
            if(valid(str))
            {
                count++;
            }
        }
    } 
    cout << count;
}