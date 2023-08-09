#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** argv)
{
    int N;
    cin >> N;
    vector<pair<int, float>> pr;
    for(int i = 0; i < N; i++)
    {
        int a, b;
        cin >> a >> b;
        pr.emplace_back(a, (float)a / b);
    }
    sort(pr.begin(), pr.end(), [](pair<int, float> a, pair<int, float> b){return a.second > b.second;});
    cout << pr[0].first;
}