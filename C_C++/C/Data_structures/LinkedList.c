#include<stdio.h>
#include<stdlib.h>
//typedef struct Node Node; // creating the alias name for the "struct node"  

struct Node
{
    int val; //intitalize the value;
    struct Node* next; //allocating the next address
};

//create a node function for allocating the value and the address
struct Node* create(int val)
{
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->val = val;
    ptr->next = NULL;
    return ptr;
}


//create an insert function for LinkedList to the Head
struct Node* add_back(struct Node* head, int val)
{
    if(head == NULL)
    {
        head = create(val);
        return head;
    }

    //traverse the head upto NULL
    struct Node* ptr = head;
    while(ptr->next != NULL)
    { 
        ptr=ptr->next;
    }

    ptr->next = create(val);
    return head;
}

//create an insert function for LinkedList to the Head in the front
struct Node* add_front(struct Node* head, int val){
    struct Node *new_node = create(val);
    new_node->next = head;
    head = new_node;
    return head;
}

// To print the LinkedList
void Print_value_and_address(struct Node* head)
{
    struct Node* ptr = head;
    while(ptr != NULL)
    {
        printf("%d->", ptr->val);
        ptr = ptr->next;
    }
    if(ptr == NULL)
    {
        printf("NULL\n");
    }
}

//Count no of nodes in LinkedList
int no_of_nodes_in_linkedlist(struct Node* head)
{
    int c = 0;
    struct Node* ptr = head;
    while(ptr != NULL)
    {
        c++;
        ptr = ptr->next;
    }
    /*
        Alternative method
        for(struct Node* ptr = head; ptr != NULL; ptr = ptr->next) c++;
    */
    return c;
}

void Print_value_only(struct Node* value)
{
    printf("%d\n", value->val);
}

void Print_address_only(struct Node* value)
{
    printf("%p\n", value);
}

struct Node* get_middle_element(struct Node* head)
{
    struct Node* slow = head;
    for(struct Node* fast = head; fast != NULL; fast = fast->next->next)
    {
        slow = slow->next;
    }
    return slow;
}

int get_the_data_from_index_value_without_the_limit(struct Node* head, int in)
{
    int d = -1, i = 0;
    for(struct Node* ptr = head; i <= in; i++, ptr = ptr->next)
    {
        if(ptr == NULL) return -1;
        else d = ptr->val;
    }
    return d;
}

int main(int argc, char** argv)
{
    int N;
    scanf("%d", &N);
    struct Node* head = NULL;   
    while(N--)
    {
        int v;
        scanf("%d",&v);
        head = add_back(head, v);
    }
    
    Print_value_and_address(head); // calls to print the linkedlist
    
    printf(Print_value_only(get_middle_element(head)));
    printf(Print_address_only(get_middle_element(head)));
    return 0;
}
