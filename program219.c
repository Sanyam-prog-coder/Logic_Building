#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
// Function     : Count
// Description  : Accept String From user and count A in it
// Auther       : Sanyam Bhupendrakmar Ravne 
// Date         : 27/11/2025
//
////////////////////////////////////////////////////////////////////////////////

int Count(char str[])
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == 'A')
        {
            iCount++;
        }
        str++;

    }
    return iCount;
}

int main()
{
    char Arr[50] = {'\0'};
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n]s",Arr);                 

    iRet = Count(Arr);
    printf("Count of a is : %d\n",iRet);

    return 0;
}