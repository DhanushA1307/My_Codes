#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** argv)
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr)/sizeof(arr[0]);

    sort(arr, arr+n, greater<int>());
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;

    sort(arr, arr+n, less<int>());
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;

    return 0;
}