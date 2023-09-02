#include<stdio.h>
#include<stdlib.h>

//typedef struct Node Node; // creating the alias name for the "struct node"  

struct Node
{
    int val; //intitalize the value;
    struct Node* next; //allocating the next address
};

struct Node* add(Node* head, int val)
{
    if(head == NULL)
    {
        head = (struct Node*)malloc(sizeof(struct Node));
        head->val = val;
        head->next = NULL;
        return;
    }

    //traverse the head upto NULL
    struct Node* ptr = head;
    while(ptr->next != NULL) { ptr=ptr->next; }
    struct Node* last = (struct Node*)malloc(sizeof(struct Node));
    last->val = val;
    last->next = NULL; 

    ptr->next = last;
    return head;
}

int main(int argc, char** argv)
{
    int N;
    scanf("%d", &N);
    struct Node* head = NULL;   
    while(N--)
    {
        int v;
        scanf("%d",v);
        head = add(head, v);
    }

    while(head->next != NULL)
    {
        printf("%d", head->val);
    }

    return 0;
}
