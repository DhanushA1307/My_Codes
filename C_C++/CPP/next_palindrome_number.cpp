#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** argv)
{
    int N;
    cin >> N;
    while(true)
    {
        string s = to_string(N), c = "";
        for(int i = s.length()-1; i >= 0; i--) c += s[i];
        if(s == c)
        {
            cout << N;
            return 0;
        }
        else
        {
            N++;
        }
    }
}