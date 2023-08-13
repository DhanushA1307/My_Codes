#include<bits/stdc++.h>
using namespace std;

void check(int l, vector<string> &S)
{
    for(int i = 0; i < S.size(); i++)
    {
        if(S[i].length() == l)
        {
            cout << S[i] << " ";
            break;
        }
    }
}

int main(int argc, char** argv)
{
    int N;
    cin >> N;
    
    vector<int> n;
    vector<string> s;

    for(int i = 0; i < N; i++)
    {
        int v;
        string S;
        cin >> v >> S;
        n.push_back(v);
        s.push_back(S);
    }

    for(int i = 0; i < N; i++)
    {
        cout << n[i] << " " << check(n[i],s) << endl;
    }
}