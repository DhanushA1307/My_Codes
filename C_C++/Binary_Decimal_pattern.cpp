#include<bits/stdc++.h>
using namespace std;

string bins(int o, int m)
{
    string p = "";
    while(o > 0)
    {
        p += "1";
        o--;
    }
    while(p.length() < m) p += "0";
    //reverse(p.begin(), p.end());
    return p;
}

int main(int argc, char** argv)
{
    string s;
    cin >> s;
    vector<int> v;
    for(int i = 0; i < s.length(); i++)
    {
        v.push_back(s[i] - '0');
    }
    int m = *max_element(v.begin(), v.end());
    vector<string> mat;
    for(int i = 0; i < v.size(); i++)
    {
        string c = bins(v[i], m);
        mat.push_back(c);
    }
    //for(auto i : mat) cout << i << " ";
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < s.length(); j++)
        {
            cout << mat[j][i] << " ";
        }
        cout << endl;
    }
}