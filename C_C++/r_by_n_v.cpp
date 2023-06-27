#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** argv)
{
	string s;
	char c;
	cin >> s >> c;
	for(int i = 0; i < s.length(); i++)
	{
		if(s[i] == c)
		{
			int c = 0;
			for(int j = i+1; j < l; j++)
			{
				if(valid(s[j])
				{
					c++;
					cout << s[j];
					break;
				}
			}
			if(c == 0)
			{
				cout << s[i];
			}
		}
		else
		{
			cout << s[i];
		}
	}
}
