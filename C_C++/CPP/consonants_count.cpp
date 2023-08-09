#include<bits/stdc++.h>
using namespace std;

bool vow(char c)
{
    return (c != 'a' || c != 'e' || c != 'i' || c != 'o' || c != 'u');
}

int count(string s)
{
    int cons = 0;
    for(int i = 0; i < s.length(); i++)
    {
        if(vow(s[i]))
        {
            cons++;
        }
    }
    return cons;
}

int main(int argc, char** argv)
{
    int N;
    cin >> N;
    vector<pair<string, int>> mp;
    for(int i = 0; i < N; i++)
    {
        string s;
        cin >> s;
        int c = count(s);
        mp.emplace_back(s,c);
    }

    sort(mp.begin(), mp.end(), [](pair<string, int> a, pair<string, int> b){
        return a.second < b.second;
    });

}