#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
// Function     : strlenX
// Description  : Accept Array  from user And Count it 
// Auther       : Sanyam Bhupendrakmar Ravne 
// Date         : 27/11/2025
//
////////////////////////////////////////////////////////////////////////////////

int strlenX(char str[])
{
    int iCount = 0;

    while(*str != '\0')
    {
        iCount++;
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

    iRet = strlenX(Arr);
    printf("Stering Length is : %d\n",iRet);

    return 0;
}