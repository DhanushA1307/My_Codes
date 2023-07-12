#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** argv)
{
    int t = 0;
    string s1, s2;
    cin >> s1 >> s2;
    if(s1.length() == s2.length())
    {
        for(int i = 0; i < s1.length(); i++)
        {
            int e = (int(s1[i]) - 48)*(int(s2[s2.length()-(i+1)]) - 48);
            t += e;
        }
    }
    cout << t;
}