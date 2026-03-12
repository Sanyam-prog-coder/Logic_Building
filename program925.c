#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};
typedef struct node NODE;
typedef struct node* PNODE; 
typedef struct node**  PPNODE;

// Time Complexity : N
// Space Complexity : 1

void InsertLast(PPNODE first, int no)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn ->data = no;
    newn ->next = NULL;

    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
        temp = *first;

        while(temp ->next != NULL)      // type 2
        {
            temp = temp ->next;
        }
        temp ->next = newn;
    }
}

void Display(PNODE first)
{
    while(first != NULL)    // type 1
    {
        printf("| %d | -> ", first ->data);
        first = first ->next;
    }
    printf("NULL\n");
}

void Reverse(PPNODE first)
{
    PNODE Preveious = NULL;
    PNODE Current = NULL;
    PNODE Next = NULL;

    if(*first == NULL)
    {
        return;
    }

    Current = *first;
    
    while(Current != NULL)
    {
        Next = Current->next;
        Current->next = Preveious;
        Preveious = Current;
        Current = Next;
    }

    *first = Preveious;
}

int main()
{
    PNODE head = NULL;
    
    InsertLast(&head,11);
    InsertLast(&head,21);
    InsertLast(&head,51);
    InsertLast(&head,101);

    Display(head);

    Reverse(&head);

    printf("Linked list After reverse : \n");

    Display(head);
 
    return 0;
}