#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** argv)
{
    int N;
    cin >> N;
    for(int i = 1, j = N; i <= (N/2); i++, j--)
    {
        for(int k = 1; k <= i; k++)
        {
            cout << i;
        }
        for(int k = 1; k <= j; k++)
        {
            cout << j;
        }
        cout << endl;
    }
}