#include<bits/stdc++.h>
using namespace std;

bool vow(char c)
{
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') 
    {
        return true;
    }
    return false;
}

char check(char a, char b, char c)
{
    map<char, int> mp;
    if(vow(tolower(a)))
    {
        mp['V']++;
    }
    else
    {
        mp['C']++;
    }

    if(vow(tolower(b)))
    {
        mp['V']++;
    }
    else
    {
      mp['C']++;
    }
    
    if(vow(tolower(c)))
    {
      mp['V']++;
    }
    else
    {
      mp['C']++;
    }

    vector<pair<char, int>> pr;
    for(auto i : mp) 
    {
        pr.emplace_back(i.first, i.second);
    }
    sort(pr.begin(), pr.end(), [](pair<char, int> a, pair<char, int> b)
                                {
                                    return a.second >= b.second;
                                }
        );
    return pr[0].first;
}

char check(char a, char b)
{
    map<char, int> mp;
    if(vow(tolower(a)))
    {
        mp['V']++;
    }
    else
    {
        mp['C']++;
    }

    if(vow(tolower(b)))
    {
        mp['V']++;
    }
    else
    {
        mp['C']++;
    }

    vector<pair<char, int>> pr;
    for(auto i : mp) 
    {
        pr.emplace_back(i.first, i.second);
    }
    sort(pr.begin(), pr.end(), [](pair<char, int> a, pair<char, int> b)
                                {
                                    return a.second >= b.second;
                                }
        );
    return pr[0].first;    
}

char check(char a)
{
    char c = 'C';
    if(vow(tolower(a))) c = 'V';
    return c; 
    
}

int main(int argc, char** argv)
{
    map<string, int> mp;
    vector<pair<string, int>> pr;
    
    for(int i = 0; i < 3; i++) 
    {
        string s;
        cin >> s;
        mp[s] = s.length();
    }

    for(auto i : mp)
    {
        pr.emplace_back(i.first, i.second);
    }
    
    sort(pr.begin(), pr.end(), [](pair<string, int> a, pair<string, int> b)
                                {
                                    return a.second >= b.second;
                                }
        );
    for(int i = 0; i < pr[0].second; i++)
    {
        if(i <= pr[2].second)
        {
            char c = check(pr[0].first[i], pr[1].first[i], pr[2].first[i]);
            cout << c;
        }
        else
        {
            if(i <= pr[1].second)
            {
                char c = check(pr[0].first[i], pr[1].first[i]);
                cout << c;
            }
            else
            {
                char c = check(pr[0].first[i]);
                cout << c;
            }
        }
    }
}