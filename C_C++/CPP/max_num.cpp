#include<bits/stdc++.h>
using namespace std;

bool solve(int val, vector<int> vec)
{
    int c = 0;
    for(auto i : vec) if(i <= val) c++;
    if(c == vec.size()) return true;
    else return false;
}

int main(int argc, char** agrv)
{
    int N, K, val;
    cin >> N >> K;
    vector<int> vec, sol;
    for(int i = 1; i <= N; i++)
    {
        cin >>  val;
        vec.push_back(val);
    }
    val = *max_element(vec.begin(), vec.end());
    for(auto i : vec) 
    {
        if(i != val)
        {
            sol.push_back(i*K);
        }
    }
    if(solve(val, sol)) 
    {
        cout << val;
    }
    else
    {
        cout << -1;
    }
    cout << endl;
    return 0;
}
