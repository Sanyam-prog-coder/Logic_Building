#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
// Function     : Change
// Description  : Accept String From user and change a into _
// Auther       : Sanyam Bhupendrakmar Ravne 
// Date         : 27/11/2025
//
////////////////////////////////////////////////////////////////////////////////

void Change(char str[])
{
    while(*str != '\0')
    {
        if(*str == 'a')
        {
            *str = '_';
        }
        str++;
    }    
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter string : \n");
    scanf("%[^'\n]s",Arr);   
    
    Change(Arr);
    
    printf("Updated Strinf is : %s\n",Arr);

    return 0;
}