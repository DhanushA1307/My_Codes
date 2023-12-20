#include<stdio.h>

int unique_path(int R, int C){
	if(R == 0 && C == 0) return 0;
	if(R == 1 || C == 1) return 1;
	return (unique_path(R-1,C)+unique_path(R,C-1));
}


int main(int argc,  char** argv){
	int R, C;
	scanf("%d %d",&R,&C);
	printf("%d",unique_path(R-1,C-1));
}
