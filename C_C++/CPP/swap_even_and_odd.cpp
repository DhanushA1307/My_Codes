#include<bits/stdc++.h>
using namespace std;

int c(string &s, int r)
{
	for(int i = 0; i < s.length(); i++)
	{
		int e = int(s[i]) - 48;
		if(e % 2 == r)
		{
			r = i;
			break;
		}
	}
	return r;
}

int main(int argc, char** argv)
{
	string s;
	int N = 0, s1 = 0, s2 = 0;
	cin >> s;
	s1 = c(s,0);
	s2 = c(s,1);

	swap(s[s1], s[s2]);

	cout << s;
}
