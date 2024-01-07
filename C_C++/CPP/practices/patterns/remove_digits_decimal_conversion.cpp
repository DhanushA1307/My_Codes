#include<bits/stdc++.h>
using namespace std;

void remove_digits_decimal_conversion(int N){
    string s = "";
    bool f = false;
    while(N--){
        string n, em = "";
        cin >> n;
        for(int i = 0; i < n.length(); i++){
            if(n[i] == "1" || n[i] == "0"){
                f = true;
                em += n[i];
            }
        }

        s += to_string(stoi(em));
    }
    if(!f){
        cout << "-1";
        return 0;
    }
    cout << stoi(s, nullptr, 2);
}

int main(int argc, char** argv){
    int N;
    cin >> N;
    remove_digits_decimal_conversion(N);
}