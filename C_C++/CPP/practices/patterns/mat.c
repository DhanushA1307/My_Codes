#include<stdio.h>
#include<stdlib.h>

int main(int argc, char** argv){
	//int R, C;
	//scanf("%d %d",&R,&C);
	int N;
	scanf("%d",&N);
	int mat[N][N], rows[N*N];
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			scanf("%d",&mat[i][j]);
			rows[(i*N)+j] = mat[i][j];
		}
	}
	for(int i = 0; i < (N*N); i++) printf("%d ", rows[i]);
	printf("\n");
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++) printf("%d ", rows[(i*N)+j]);
		printf("\n");
	}
}
