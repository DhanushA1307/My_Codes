#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** argv)
{
	string s;
	int N;
	cin >> s >> N;
	s = s.substr(0,N);
	reverse(s.begin(), s.end());
	for(int i = 0; i < s.length(); i++)
	{
		if(isupper(s[i]))
		{
			s[i] = tolower(s[i]);
		}
		else
		{
			s[i] = toupper(s[i]);
		}
	}
	cout << s << endl;
}
