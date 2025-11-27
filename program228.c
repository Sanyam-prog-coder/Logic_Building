#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
// Function     : CountSmall
// Description  : Accept String From user and Count small Case from it
// Auther       : Sanyam Bhupendrakmar Ravne 
// Date         : 27/11/2025
//
////////////////////////////////////////////////////////////////////////////////

int CountSmall(char str[])
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
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