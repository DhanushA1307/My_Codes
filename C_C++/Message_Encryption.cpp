#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** argv)
{
    string s, f = "";
    int N;
    cin >> s >> N;
    vector<string> arr;
    for(int i = 0; i < s.length(); i+=N)
    {
        string a = s.substr(i,N);
        if(arr.size() % 2 == 1) reverse(a.begin(), a.end());
        arr.push_back(a);
    }
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < arr.size(); j++)
        {
            f += arr[j][i];
        }
    }
    cout << f;
}