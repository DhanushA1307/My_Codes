#include<bits/stdc++.h>
using namespace std;

void hollow_printing(int r, int R, int C){
    while(r < R){
        int c = 0;
        while(c < C){
            cout << ((r%2 && c%2) ? '0' : '*') << " ";
            c++;
        }
        r++;
        cout << endl;
    }
}

int main(int argc, char** argv){
    int R, C;
    cin >> R >> C;
    hollow_printing(0, R, C);
}