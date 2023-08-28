#include<bits/stdc++.h>
using namespace std;

int main()
{
    string N;
    int K, f = 0;
    cin >> N >> K;
    for(int i = 0; i < N.length(); i++)
    {
        if(N[i] >= '1' && N[i] <= '9')
        {
            f = i;
            break;
        }
    }
    int i = 0;
    if(N[f] != '1')
    {
        N[f] = '1';
        K--;
    }
    i++;
    vector<int> a;
    for(int j = 0; i < N.length(); i++)
    {
        if(j == K)
        {
            break;
        }
        if(N[i] >= '1' && N[i] <= '9')
        {
            a.push_back(N[i] - '0');
            j++;
        }
    }
    for(int i = 0; i < a.size(); i++)
    {
        N[a[i]] = '0';
    }
    cout << N;
}