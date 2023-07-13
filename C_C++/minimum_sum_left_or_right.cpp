#include<bits/stdc++.h>
using namespace std;


int main(int argc, char** argv)
{
    int N, s1 = 0, s2 = 0;
    vector<int> v;
    while(cin >> N) v.push_back(N);
    cin >> N;
    for(int i = 0; i < v.size(); i++)
    {
        if(v[i] == N) break;
        s1 += v[i];
    }
    for(int i = v.size() - 1; i >= 0; i--)
    {
        if(v[i] == N) break;
        s2 += v[i];
    }
    cout << min(s1, s2) << endl;
}