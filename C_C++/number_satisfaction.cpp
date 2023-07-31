#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** argv)
{
	int A,B,X,Y,Z;
	cin >> A >> B >> X >> Y >> Z;
	A++;
	while(A <= B)
	{
		if(A % X == 0 || A % Y == 0 || A % Z == 0)
		{
			cout << A << " ";
		}
		A++;
	}
	return 0;
}
