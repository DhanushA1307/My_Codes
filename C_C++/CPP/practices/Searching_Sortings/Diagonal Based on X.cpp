#include<bits/stdc++.h>
using namespace std;

vector<int> dia(vector<vector<int>> &mat, int &i_pos, int &j_pos){
	vector<int> di;
	for(int i = i_pos, j = j_ppos; i >= 0 && j >= 0; i--, j--) di.push_back(mat[i][j]);
	reverse(di.begin(), di.end());
	for(int i = i_pos+1, j = j_pos+1; i < mat.size(), j < mat.size(); i++, j++) di.push_back(mat[i][j]);
	return di;
}

vector<int> oppo_dia(vector<vector<int>> &mat, int &i_pos, int &j_pos){
	vector<int> oppo;
	for(int i = i_pos, j = j_pos; i >= 0 && j < mat.size(); i--, j++) oppo.push_back(mat[i][j]);
	reverse(oppo.begin(), oppo.end());
	for(int i = i_pos+1, j = j_pos-1; j >= 0 && i < mat.size(); i++, j--) oppo.push_back(mat[i][j]);
	return oppo;
}

int main(int argc, char** argv){
	int N, X;
	cin >> N;
	vector<vector<int>> mat;
	for(int i = 0; i < N; i++){
		vector<int> rows;
		for(int j = 0; j < N; j++){
			int x;
			cin >> x;
			rows.push_back(x);
		}
		mat.push_back(rows);
	}

	cin >> X;

	int i_pos = 0, j_pos = 0;
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
		if(!cond){
			break;
		}
	}

	vector<int> f = ((X%2 == 0) oppo_dia(mat, i_pos, j_pos) : dia(mat, i_pos, j_pos));
	for(auto i : f) cout << i << " ";

	return 0;
}
