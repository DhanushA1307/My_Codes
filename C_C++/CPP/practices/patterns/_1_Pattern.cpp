#include<bits/stdc++.h>
using namespace std;

void prints(int N){
    for(int i = 1; i <= N; i++) cout << N;
    cout << endl;
}

void solve(int N){
    prints(N);
    for(int i = N+1, k = 0; i <= N+N; i++){
        for(int j = 1; j <= N+1; j++) cout << ((j == N) ? (++k) : i);
        cout << endl;
    }
    prints(N);
}

int main(int argc. char** argv){
    int N;
    cin >> N;
    solve(N);
}
