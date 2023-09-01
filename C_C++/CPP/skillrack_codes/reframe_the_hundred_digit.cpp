#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** argv)
{
    string s, s_c = "";
    int N, count = 0;
    cin >> s >> N;
    int h = abs(((int(s[s.length()-2]) - 48)+(int(s[s.length()-1]) - 48)) - N);
    for(int i = s.length()-1; i >= 0; i--)
    {
        count++;
        s_c += s[i];
        if(count == 2)
        {
            s_c += char(h + "0");
        }
    }
    reverse(s_c.begin(), s_c.end());
    cout << s_c;    
}