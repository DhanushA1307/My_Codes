#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** argv)
{
    string s;
    //char s[] = "abab";
    //int l = strlen(s);
    cin >> s;
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == 'a') s[i] = '1';
        else s[i] = '0';
    }
    int x = 0;
    for(int i = s.length()-1; i >= 0; i--)
    {
        x += ((pow(2,s.length()-(i+1))) * ((int(s[i]) - 48)));
    }
    cout << x;
}