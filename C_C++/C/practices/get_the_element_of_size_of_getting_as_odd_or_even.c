#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

int* func(int N){
    int* arr = malloc(sizeof(int)*N);
    int j = ((N%2) ? 1 : 2);
    for(int i = 0; i < N; i++){
        arr[i] = (j += 2);
    }
    return arr;
}

int main(int argc, char** argv){
    int N;
    scanf("%d",&N);
    int *arr = func(N);
    for(int i = 0; i < N; i++) printf("%d ",*(arr+i));
}