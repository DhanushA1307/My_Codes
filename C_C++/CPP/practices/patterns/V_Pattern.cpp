#include<bits/stdc++.h>
using namespace std;

void V_Pattern(int f, int l, int Range, char star, char hashtag){
    while(f <= l){
        for(int e_r = 1; e_r <= Range; e_r++) cout << ((e_r == f || e_r == l) ? star : hashtag);
        f++;
        l--;
        cout << endl;
    }
}

int main(int argc, char** argv){
    int N;
    cin >> N;
    V_Pattern(1, N, N, '*', '#');
}