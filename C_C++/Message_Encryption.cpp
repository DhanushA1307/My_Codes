#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** argv)
{
    string s;
    int N;
    
    cin >> s >> N;

    vector<string> str_arr;
    vector<char> str;

    for(int i = 0; i < s.length(); i += N) str_arr.push_back(s.substr(i,N));
    
    for(int i = 0; i < N; i++) if(i % 2 == 1) reverse(str_arr[i].begin(), str_arr[i].end());

    for(int i = 0, j = 0; i < N; i++) 
    {
        if((j+1) == N)
        {
            break;
        }
        if((i+1) == N)
        {
            j++;
            i = 0;
        }
        str.push_back(str_arr[j][i]);
    }
    for(auto i : str) cout << i << " ";
}