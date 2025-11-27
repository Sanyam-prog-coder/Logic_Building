#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
// Function     : CountSmall
// Description  : Accept String From user And Count small Case
// Auther       : Sanyam Bhupendrakmar Ravne 
// Date         : 27/11/2025
//
////////////////////////////////////////////////////////////////////////////////

int CountSmall(char str[])
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str >= 97) && (*str <= 122))
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
    
    iRet = CountSmall(Arr);
    
    printf("Number of Small Character Are : %d\n",iRet);

    return 0;
}