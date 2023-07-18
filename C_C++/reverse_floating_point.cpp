#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** argv)
{
    string s;
    cin >> s;
    reverse(s.begin(), s.begin()+s.find('.'));
    reverse(s.begin()+s.find('.')+1, s.end());
    double d = stod(s);
    cout << fixed << setprecision(2) << d;
}