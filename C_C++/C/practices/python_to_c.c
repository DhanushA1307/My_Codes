#include<stdio.h>

typedef struct Node{
    int data;
    struct Node *next;
}*node;

node create(int val){
    node temp = (node)malloc(sizeof(struct Node));
    temp->data = val;
    temp->next = NULL;
    return temp;
}

node insert(node head, int val){
    if(head == NULL){
        head = create(val);
        return head;
    }
    node temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = create(val);
    return head;
}

int isEven(int n){
    return n % 2 == 0;
}

int main(){
    node head = NULL;
    int N;
    while(scanf("%d",&N) > 0) head = insert(head, N);
    while(head != NULL){
        if(isEven(head->data)) printf("%d ",head->data);
        head = head->next;
    }
}