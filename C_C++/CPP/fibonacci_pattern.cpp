#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** argv)
{
    int N;
    cin >> N;
    for(int i = 1; i <= N; i++)
    {
        int t1 = 0, t2 = 1, n = 0;
        for(int j = 0; j <= i; j++)
        {
            cout << t1 << " ";
            n = t1 + t2;
            t1 = t2;
            t2 = n;
        }
        cout << endl;
    }
}