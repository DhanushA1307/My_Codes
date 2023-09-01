#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** argv)
{
    int N;
    string s;
    cin >> N >> s;
    for(int i = 1; i <= N; i++)
    {
        s += s;
    }
    cout << s.length();
}