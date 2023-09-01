#include<bits/stdc++.h>
using namespace std;

void insert(int &N, int &i)
{
    for(int j = 1; j <= N-i; j++)
    {
        cout << "#";
    }
    for(int j = 1; j <= 2*i-1; j++)
    {
        if(j % 2 == 1)
        {   
            cout << "*";
        }
        else
        {
            cout << "-";
        }
    }
    for(int j = N - i; j >= 1; j--)
    {
        cout << "#";
    }
    cout << endl;
}

int main(int argc, char** argv)
{
    int N;
    cin >> N;
    for(int i = 1; i <= N; i++)
    {
        insert(N, i);
    }
    for(int i = N-1; i >= 1; i--)
    {
        insert(N, i);
    }
}