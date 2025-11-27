#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
// Function     : strlwrX
// Description  : Accept String From user And A-Z to lower
// Auther       : Sanyam Bhupendrakmar Ravne 
// Date         : 27/11/2025
//
////////////////////////////////////////////////////////////////////////////////

void strlwrX(char str[])
{
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;
        }
        str++;
    }    
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter string : \n");
    scanf("%[^'\n]s",Arr);   
    
    strlwrX(Arr);
    
    printf("Updated String is : %s\n",Arr);

    return 0;
}