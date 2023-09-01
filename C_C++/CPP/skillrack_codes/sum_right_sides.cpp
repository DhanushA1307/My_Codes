#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** argv)
{
    int N;
    cin >> N;
    int a[N] = {0};
    for(int i = 0; i < N; i++)
    {
        int v;
        cin >> v;
        a[i] = v;
    }
    for(int i = 0; i < N; i++)
    {
        int s = 0;
        for(int j = i+1; j < N; j++)
        {
            if(a[i] > a[j])
            {
                s += a[j];
            }
        }
        cout << a << " ";
    }
}