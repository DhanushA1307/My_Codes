#include<bits/stdc++.h>
using namespace std;

void second_half_reverse_pattern(int N){
    for(int i = 1, t = N; i <= (N/2); i++){
        for(int j = 1; j < i; j++) cout << "* ";
        
        vector<int> v;
        
        for(int j = 1; j <= t; j++) v.push_back(j);
        
        reverse(v.begin()+(v.size()/2), v.end());
        t -= 2;
        
        for(auto j : v) cout << j << " ";
        cout << endl;
    }
}

int main(int argc, char** argv){
    int N;
    cin >> N;
    second_half_reverse_pattern(N);
}