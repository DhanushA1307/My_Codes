#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** argv){
    int N, max_val = INT_MIN;
    cin >> N;
    string s = "";
    while(N){
        s += to_string(N%2);
        N /= 2;
    }
    reverse(s.begin(), s.end());
    for(int i = 0; i < s.length(); i++) max_val = max(max_val, stoi(s.substr(0,i)+s.substr(i+1,s.length()), nullptr, 2));
    cout << max_val << endl;
}