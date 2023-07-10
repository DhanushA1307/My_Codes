#include<bits/stdc++.h>
using namespace std;

void v(int &t)
{
    for(int l = 0, k = 1; l < t; l++)
    {
        if(l % 2 == 0)
        {
            cout << k;
            k++;
        }
        else
        {
            cout << '*';
        }
    }
}


int main(int argc, char** argv)
{
    int N, t = 0;
    cin >> N;
    t = N+(N-1);
    for(int i = 0; i < N; i++)
    {
        if(i > 0)
        {
            t -= 2;
            int j = 0;
            while(j < i)
            {
                cout << '*';
                j++;
            }
            v(t);
            j--;
            while(j >= 0)
            {
                cout << '*';
                j--;
            }
        }
        else
        {
            v(t);
        }
        cout << endl;
    }
}