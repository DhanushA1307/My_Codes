#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** argv){
    string s;
    cin >> s;
    int vow = 0;
    for(int i = 0; i < s.length(); i++){
        switch(s[i]){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u': vow++;
        }
    }
    for(int i = 0, cons = 0; i < s.length(); i++){
        switch(s[i]){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                cout << vow;
                vow--;
                break
            default:
                ++cons;
                cout << cons;
        }
    }
}