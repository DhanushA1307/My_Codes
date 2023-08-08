#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** argv)
{
    int x,y;
    cin >> x >> y;
    for(int i = 1; i <= 10; i++) cout << ((x >= y) ? (x*i) : (y*i)) << " ";
}
