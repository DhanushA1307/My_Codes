#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** argv)
{
    int N, T;
    cin >> N >> T;
    while(T >= 1)
    {
        cout << T << " * " << N << " * " << (T*N) << endl;
        T--;
    }
}