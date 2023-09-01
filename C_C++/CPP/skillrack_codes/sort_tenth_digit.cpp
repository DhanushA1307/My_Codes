#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** argv)
{
	int N, D;
	cin >> N;

	int a[N] = {0};
	for(int i = 0; i < N; i++)
	{
		int e;
		cin >> e;
		a[i] = e;
	}
	
	cin >> D;
	vector<int> v;

	for(int i = 0; i < N; i++)
	{
		if((a[i]/10)%10 == D)
		{
			v.push_back(a[i]);
		}
	}

	sort(v.begin(), v.end());

	for(int i = 0, j = 0; i < N; i++)
	{
		cout << (((a[i]/10) % 10) == D ? v[j++] : a[i]) << " "; 
	}
	return 0;
}
