#include<stdio.h>
#include<stdlib.h>

int main(int argc, char** argv)
{
    char str[101];
    int len,X;
    scanf("%s%n\n%d",str,&len,&X);
    printf(str+len-X);
}
