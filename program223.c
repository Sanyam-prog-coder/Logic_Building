#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
// Function     : Countocuurance
// Description  : Accept String From user and count Given Character
// Auther       : Sanyam Bhupendrakmar Ravne 
// Date         : 27/11/2025
//
////////////////////////////////////////////////////////////////////////////////

int Countocuurance(char str[], char ch)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ch)
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

    iRet = Countocuurance(Arr, 'd');
    printf("Number of Ocuurances are : %d\n",iRet);

    return 0;
}