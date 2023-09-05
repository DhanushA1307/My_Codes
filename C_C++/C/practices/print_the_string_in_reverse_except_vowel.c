#include<stdio.h>

struct Node
{
    char data;
    struct Node* next;
};

struct Node* create(char c)
{
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data = c;
    ptr->next = NULL;
    return ptr;
}

struct Node* insert(struct Node* head, char c)
{
    if(head == NULL)
    {
        head = create(c);
        return head;
    }

    struct Node* ptr = head;
    while(ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = create(c);
    return head;
}

void reverse(struct Node** head_ref)
{
    struct Node* prev = NULL;
    struct Node* current = *head_ref;
    struct Node* next = NULL;
    while (current != NULL) {
        // Store next
        next = current->next;
 
        // Reverse current node's pointer
        current->next = prev;
 
        // Move pointers one position ahead.
        prev = current;
        current = next;
    }
    *head_ref = prev;
}

int main(int argc, char** argv)
{
    char str[10001];
    fgets(s,sizeof(s), stdin);

    struct Node* head = NULL;
    for(int i = 0; str[i] != '\0'; i++)
    {
        switch(tolower(str[i]))
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                continue;
            default:
                head = insert(head, str[i]);
                break;
        }
    }
    reverse(&head);
    for(int i = 0; i < strlen(str); i++)
    {
        switch(tolower(str[i]))
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                printf("%c", str[i]);
                break;
            default:
                printf("%c", head->data);
                head = head->next;
                break;
        }
    }
}