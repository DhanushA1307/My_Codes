#include<bits/stdc++.h>
using namespace std;

string check(int arr[], int a, int &N)
{
    string s = "";
    int f = 1;
    for(int i = 0; i < N; i++)
    {
        if(arr[i] != a)
        {
            f *= arr[i];
        }
    }
    s = to_string(f);
    return s;
}


int main(int argc, char** argv)
{
    int N, val;
    cin >> N;
    int arr[N] = {0};
    for(int i = 0; i < N; i++)
    {
        cin >> val;
        arr[i] = val;
    }

    for(int i = 0; i < N; i++)
    {
        string c = check(arr, arr[i], N);
        cout << c << " ";
    }
}