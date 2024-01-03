#include <bits/stdc++.h>
 
using namespace std;


int main(int argc, char** argv)
{
    unsigned long long int X, Y; //Giving the Input as the limit upto 10^8
    cin >> X >> Y;
    vector<int> v;
    while(X > 0){
        for(int temp = Y; temp > 0; temp /= 10){ //Need repeatation times of same number in Y
            int X_unit = (X%10), Y_unit = (temp%10);
            if(Y_unit%2){ //unit digit of Y must be odd
                v.push_back((X_unit*10)+Y_unit);
            }
            if(X_unit%2){ //unit digit of X must be odd
                v.push_back((Y_unit*10)+X_unit);
            }
        }
        X /= 10;
    }
    if(v.empty()){
        cout << -1;
        return 0;
    }
    cout << *max_element(v.begin(), v.end());
	return 0;
}
