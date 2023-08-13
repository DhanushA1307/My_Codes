#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** argv)
{
    char c;
    cin >> c;
    for(int i = 1; i <= ((int(tolower(c)))-96); i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << char(96+i) << " ";
        }
        cout << endl;
    }
}