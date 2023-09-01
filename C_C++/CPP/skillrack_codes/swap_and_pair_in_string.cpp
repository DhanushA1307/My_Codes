#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** argv)
{
    string s;
    int N;
    cin >> s >> N;
    for(int i = 0; i < N; i++)
    {
        int a, b;
        cin >> a >> b;
        swap(s[a-1], s[b-1]);
    }
    cout << s << endl;
}