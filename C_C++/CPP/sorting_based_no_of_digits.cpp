#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** argv)
{
    int N, c = 0;
    cin >> N;
    int a[N] = {0};
    for(int i = 0; i < N; i++)
    {
        string s;
        cin >> s;
        a[i] = s.length();
    }
    for(int i = 0; i < N; i++)
    {
        if(a[i] <= a[i+1])
        {
            c++;
        }
    }
    cout << ((c == N) ? "yes" : "no");
}
