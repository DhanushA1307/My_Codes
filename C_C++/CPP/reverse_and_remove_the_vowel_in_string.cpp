#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** argv)
{
    string s;
    vector<int> a;
    cin >> s;
    for(int i = 0; i <s.length(); i++)
    {
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o'|| s[i] == 'u')
        {
            a.push_back(i);
        }
    }
    reverse(s.begin(), s.end());
    for(int i = 0, j = 0; i < s.length(); i++)
    {
        if(i == a[j])
        {
            j++;
        }
        else
        {
            cout << a[i];
        }
    }
}