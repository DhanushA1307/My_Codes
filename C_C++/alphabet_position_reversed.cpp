#include<bits/stdc++.h>
using namespace std;


int main(int argc, char** argv)
{
    int N;
    cin >> N;
    vector<int> arr;
    for(int i = 0; i < N; i++)
    {
        char c;
        cin >> c;
        arr.push_back(int(tolower(c))-96);
    }
    reverse(arr.begin(), arr.end());
    for(auto i : arr) 
    {
        cout << i << " ";
    }

    int N, i = 0;
    cin >> N;

    int arr[N] = {0};
    while(i <= N)
    {
        if(i == N)
        {
            i--;
            break;
        }
        char c;
        cin >> c;
        arr[i] = int(tolower(c))-96;
        i++;
    }

    while(i >= 0)
    {
        cout << arr[i] << " ";
        cout << endl;
    }
}