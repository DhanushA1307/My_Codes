#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** argv)
{
	string s;
	cin >> s;

	for(int i = 0; i < s.length(); i++) if(s[i] == s[s.length()-1]) s[i] = '0';
	int a = 0;
	for(int i = 0; i < s.length(); i++) a = (a * 10) + (int(s[i] - 48);

	cout << s;
}
