#include<bits/stdc++.h>
using namespace std;

bool prime(int N)
{
    if(N <= 1)
    {
        return false;
    }
    if(N <= 3)
    {
        return true;
    }
    if(N % 2 == 0 || N % 3 == 0)
    {
        return false;
    }
    for(int i = 5; i * i <= N; i += 6)
    {
        if(N % i == 0 || N % (i + 2) == 0)
        {
            return false;
        }
    }
    return true;
}

int rev(int N)
{
    int rev = 0;
    while(N > 0)
    {
        rev = rev * 10 + N % 10;
        N /= 10;
    }
    return rev;
}

int main(int argc, char** argv)
{
    int N;
    cin >> N;
    cout << ((prime(N) && prime(rev(N))) ?"YES":"NO");
}