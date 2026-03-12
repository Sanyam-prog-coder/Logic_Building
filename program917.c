#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};
typedef struct node NODE;
typedef struct node* PNODE; 
typedef struct node**  PPNODE;

// Time Complexity N / 2
int MiddleElementX(PNODE first)
{
    PNODE fast = NULL;
    PNODE slow = NULL;

    fast = first;
    slow = first;

    while((fast != NULL ) && (fast->next != NULL))
    {
        fast = fast->next->next;
        slow = slow->next;
    }

    return (slow->data);
}

// Time Complexity N + N / 2
int MiddleElement(PNODE first)
{
    int iCount;
    int Middle = 0;
    int i = 0;

    PNODE temp  = first;

    // N
    while(first != NULL)
    {
        first = first -> next;
        iCount++;
    }

    Middle = (iCount / 2) + 1;
    first = temp;

    // N / 2
    for(i = 1; i < Middle; i++)
    {
        first = first -> next;
    }
    
    return (first->data);
}

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

int main()
{
    PNODE head = NULL;
    int iRet = 0;

    InsertLast(&head,11);
    InsertLast(&head,21);
    InsertLast(&head,51);
    InsertLast(&head,101);
    InsertLast(&head,111);
    InsertLast(&head,121);

    Display(head);

    iRet = MiddleElementX(head);

    printf("MiddleElement is : %d\n", iRet);

    return 0;
}