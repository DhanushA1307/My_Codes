#include<bits/stdc++.h>
//using namespace std;

char check(std::string &s)
{
    std::map<char, int> mp;
    for(int i = 0; i < s.length(); i++) mp[s[i]] = int(s[i]);
    std::vector<pair<char, int>> pr;
    for(auto i : mp) pr.emplace_back(i.first,i.second);
    return pr[0].first;
}


int main(int argc, char** argv)
{
    int N;
    std::cin >> N;
    for(int i = 1; i <= N; i++)
    {
        std::string s;
        std::cin >> s;
        char c = check(s);
        std::cout << c << " ";
    }
}