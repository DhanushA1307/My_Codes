#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** argv)
{
	int N, X, Y;
	cin >> N;
	int arr[N] = {0};
	for(int i = 0; i < N; i++)
	{
		int v;
		cin >> v;
		arr[i] = v;
	}

	cin >> X >> Y;
	for(int i = 0; i < N;)
	{
		if(arr[i] % X == 0)
		{
			int a = i, b = 0;
			for(int i = N; i > a; i--)
			{
				if(arr[i] % Y == 0)
				{
					b = i;
					break;
				}
			}
			if(a && b)
			{
				swap(arr[a], arr[b]);
				break;
			}
		}
		i++;
	}
	for(int i = 0; i < N; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
}
