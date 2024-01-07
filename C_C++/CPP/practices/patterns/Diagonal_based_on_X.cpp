#include<bits/stdc++.h>
using namespace std;

vector<int> dia(vector<vector<int>> mat, int i_pos, int j_pos){
	vector<int> di;
	for(int i = i_pos, j = j_pos; i >= 0 && j >= 0; i--, j--) di.push_back(mat[i][j]);
	reverse(di.begin(), di.end());
	for(int i = i_pos+1, j = j_pos+1; i < mat.size() && j < mat.size(); i++, j++) di.push_back(mat[i][j]);
	return di;
}

vector<int> oppo_dia(vector<vector<int>> mat, int i_pos, int j_pos){
	vector<int> oppo_di;
	for(int i = i_pos, j = j_pos; i >= 0 && j < mat.size(); i--, j++) oppo_di.push_back(mat[i][j]);
	reverse(oppo_di.begin(), oppo_di.end());
	for(int i = i_pos+1, j = j_pos-1; j >= 0 && i < mat.size(); i++, j--) oppo_di.push_back(mat[i][j]);
	return oppo_di;
}


int main(int argc, char** argv){
    int N, X, i_pos = 0, j_pos = 0;
	cin >> N;
	vector<vector<int>> mat(N, vector<int>(N));
	for(int i = 0; i < N; i++) for(int j = 0; j < N; j++) cin >> mat[i][j];
	cin >> X;
	for(int i = 0; i < N; i++){
		bool cond = true;
		for(int j = 0; j < N; j++){
			if(mat[i][j] == X){
				i_pos = i;
				j_pos = j;
				cond = false;
				break;
			}
		}
		if(!cond) break;
	}
	vector<int> f =  ((X%2 == 1) ? dia(mat, i_pos, j_pos) : oppo_dia(mat, i_pos, j_pos));
	for(auto i : f) cout << i << " ";
}