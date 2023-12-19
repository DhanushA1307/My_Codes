#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** argv){
	int R, C;
	cin >> R >> C;
	for(int i = 0; i < R; i++){
		for(int j = 0; j < C; j++) cout << ((i%2 == 1 && j%2 == 1) ? "0 " : "* ");
		cout << endl;
	}
	return 0;
}

/*
	Example:
 		R : 3
   		C : 5

  		output:
				* * * * *
				* 0 * 0 *
				* * * * *
*/
