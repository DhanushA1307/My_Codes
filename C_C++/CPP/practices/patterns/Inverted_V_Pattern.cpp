#include<bits/stdc++.h>
using namespace std;

void inverted_v_pattern_string(int f, int f_m, int l_m, int l, string s){
    while(f <= f_m && l_m <= l){
        for(int i = 0; i < l; i++) cout << ((f_m == i || l_m == i) ? s[i] : '*');
        f_m--;
        l_m++;
        cout << endl;
    }
}

int main(int argc, char** argv){
    string s;
    cin >> s;
    inverted_v_pattern_string(0,((s.length()-1)/2),((s.length()-1)/2),s.length()-1, s);
}