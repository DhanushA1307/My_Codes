#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** argv){
    string N;
    int K, X, total = 0;
    cin >> N >> K >> X;
    for(int i = 0; i <= N.length()-K; i++){
        int num = stoi(N.substr(i, K));
        if(num%X == 0 && to_string(num).length() == K){
            total++;
        }
    }
    cout << total;
}