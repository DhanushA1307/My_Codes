#include<bits/stdc++.h>
using namespace std;


int main(int argc, char** argv)
{
    int N;//= 904;
    cin >> N;
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            if((i == 0 && j == 0) || (i == 0 && j == N-1) || (j == 0 && i == N-1) || (j == N-1 && i == N-1))
            {
                cout << '#';
            }
            else if(i == 0 || j == 0 || i == N-1 || j == N-1 || i == j || (i+j == N-1))
            {
                cout << '*';
            }
            else
            {
                cout << '-';
            }
        }
        cout << endl;
    }
}