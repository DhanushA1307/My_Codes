#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** argv)
{
    int N;
    cin >> N;
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++) cout << (i+1)*(j+1) << " ";
        cout << endl;
    }
}