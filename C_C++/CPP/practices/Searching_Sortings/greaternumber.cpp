#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int N, x, c = 0;
    cin >> N >> x;
    for(int i = 1; i <= N; i++){
        int v;
        cin >> v;
        if(v >= x){
            c++;
        }
    }
    cout << c;
}
