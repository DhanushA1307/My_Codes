#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** argv){
    string s;
    cin >> s;
    bool flag = false;
    for(int i = 0; i < s.length(); i++){
        if(s[i] != s[s.length()-1]){
            flag = true;
            cout << s[i];
        }
    }
    if(!flag){
        cout << "-1"; 
    }
}