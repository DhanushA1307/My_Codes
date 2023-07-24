#include<stdio.h>

int main(int argc, char** argv)
{
    char s[10000001];
    scanf("%s",s);
    for(int i = 1; i < strlen(s); i++)
    {
        for(int j = 0; j < (int)s[i] - 48; j++)
        {
            printf("%c",s[i-1]);
        }
    }
}