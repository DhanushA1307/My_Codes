#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** argv)
{
    int a, b;
    cin >> a >> b;
    while(a <= b)
    {
        if((((a/10)%10)+(a % 10)) % 2 == 0)
        {
            cout << a << endl;
        }
        a++;
    }
}