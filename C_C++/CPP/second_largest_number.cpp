#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** argv)
{
	int x, d;
	cin >> x >> d;
	int a[x] = {0};
	for(int i = 0; i < x; i++)
	{
		int v;
		cin >> v;
		a[i] = v;
	}
	for(int i = 0; i < x-1; i++)
	{
		int m = i;
		for(int j = i+1; j < x; j++)
		{
			if(a[j] < a[m])
			{
				m = j
			}
		}
		if(m != i)
		{
			swap(a[m], a[i]);
		}
	}
	cout << a[x-2];
}
