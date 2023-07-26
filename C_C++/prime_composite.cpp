#include<bits/stdc++.h>
using namespace std;

bool prime(int e)
{
    if(e <= 1) return false;
    if(e == 2 || e == 3) return true;
    if(e % 2 == 0 || e % 3 == 0) return false;
    for(int i = 5; pow(i,2) <= e; i+=6) if (e % i == 0 || e % (i+2) == 0) return false;
    return true;
}

void print(vector<int> v)
{
    for(auto i : v)
    {
        cout << i << " ";
    }
}

int main(int argc, char** argv)
{
    int N;
    cin >> N;
    vector<int> p,c;
    for(int i = 2; i <= N; i++)
    {
        if(prime(i))
        {
            p.push_back(i);
        }
        else
        {
            c.push_back(i);
        }
    }
    print(p);
    cout << endl;
    print(c);
}