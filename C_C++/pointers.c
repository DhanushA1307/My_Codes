#include<stdio.h>

int main(int argc, char** argv)
{
	int N;
	scanf("%d",&N);
	printf("%d:%p\n",N,&N);
	int *s = &N;
	printf("%d:%p",(*s),s);
	return 0;
}
