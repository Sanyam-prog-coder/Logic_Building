#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
// Function     : CountSpace
// Description  : Accept String From user and count space 
// Auther       : Sanyam Bhupendrakmar Ravne 
// Date         : 27/11/2025
//
////////////////////////////////////////////////////////////////////////////////

void CountSpace(char str[])
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
        {
             iCount++;
        }
        str++;
    }
    printf("Number of Spaces is : %d\n",iCount);
    
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter string : \n");
    scanf("%[^'\n]s",Arr);   
    
    CountSpace(Arr);
    
    return 0;
}