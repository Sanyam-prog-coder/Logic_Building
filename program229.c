#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
// Function     : CountCapital
// Description  : Accept String From user and Count captital case
// Auther       : Sanyam Bhupendrakmar Ravne 
// Date         : 27/11/2025
//
////////////////////////////////////////////////////////////////////////////////

int CountCapital(char str[])
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
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
    
    iRet = CountCapital(Arr);
    
    printf("Number of Capital Character Are : %d\n",iRet);

    return 0;
}