#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** argv)
{
    int N, K;
    vector<int> v;
    cin >> N >> K;
    for(int i = 0; i < N; i++)
    {
        int temp;
        cin >> temp;
        if(temp >= pow(10,K-1) && temp < pow(10, K)) v.push_back(temp);
    }
    if(!v.empty()) cout << *min_element(v.begin(), v.end());
    cout << -1;
}