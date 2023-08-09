#include<bits/stdc++.h>
using namespace std;

bool vow(char c)
{
	switch(c)
	{
		case 'a':
		case 'e':
		case 'u':
		case 'i':
		case 'o':
			return true;
	}
	return false;
}

int main(int argc, char** argv)
{
	string s;
	cin >> s;
	vector<int> c;
	for(int i = 0; i < s.length(); i++)
	{
		if(!vow(s[i]))
		{
			c.push_back(i);
		}
	}
	for(int i = 0, j = 0, k = 1; i < s.length(); i++)
	{
		if(vow(s[i]))
		{
			if(k % 2 == 1)
			{
				s[c[j]] = toupper(s[c[j]]);
			}
			else
			{
				s[c[j]] = tolower(s[c[j]]);
			}
			k++;
		}
		else
		{
			j++;
			k = 1;
		}
	}
	cout << s << endl;
	return 0;
}
