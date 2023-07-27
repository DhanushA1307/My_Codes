#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** argv)
{
    int N;
    cin >> N;
    for(int i = 0; i < N; i++)
    {
        int n;
        cin >> n;
        int count = 0;
        for(int j = 1; j <= n; j++)
        {
            if(n % j == 0)
            {
                count++;
            }
        }
        cout << count << endl;
    }
}