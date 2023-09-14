#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** argv)
{
	string s;
	vector<char> v;
	cin >> s;
	for(char i : s){
		switch(i){
			case '0':
			case '2':
			case '4':
			case '6':
			case '8':
				v.push_back(i);
				break;
			default:
				continue;
		}
		sort(v.rbegin(), v.rend());
		if(!v.empty()) for(char i : v) cout << i;
		else cout << -1;
	}
}
