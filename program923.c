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

bool CheckLoop(PNODE first)
{
    PNODE fast = first;
    PNODE slow = first;
    
    bool bFlag = false;

    while((fast != NULL) && (fast->next != NULL))
    {
        fast = fast->next->next;

        if(fast == slow)
        {
            bFlag = true;
            break;
        }

        slow = slow->next;

        if(fast == slow)
        {
            bFlag = true;
            break;
        }
    }

    return bFlag;
}

int main()
{
    PNODE head = NULL;
    
    int iRet = 0;
    int Pos = 4;
    int i = 0;

    bool bRet = false;

    InsertLast(&head,11);
    InsertLast(&head,21);
    InsertLast(&head,51);
    InsertLast(&head,101);
    InsertLast(&head,111);
    InsertLast(&head,121);
    InsertLast(&head,151);

    Display(head);

    bRet = CheckLoop(head);

    if(bRet == true)
    {
        printf("Loop exist\n");
    }
    else
    {
        printf("There is no loop\n");
    }
    
    return 0;
}