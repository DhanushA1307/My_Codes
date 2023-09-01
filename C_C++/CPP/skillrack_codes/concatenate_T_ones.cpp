#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** argv)
{
    int N, k = 0;
    cin >> N;
    string s = ""
    while(N > 0)
    {
        if((N%2) == 1)
        {
            s += '1';
        }
        N /= 2;
    }

    for(int i = s.length()-1; i >= 0; i--)
    {
        k += ((int(s[i]) - 48) * (pow(2,s.length()-(i+1))));
    }

    cout << k << endl;
}