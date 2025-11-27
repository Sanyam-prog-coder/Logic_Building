#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
// Function     : struprX
// Description  : Accept String From user and change a-z upper 
// Auther       : Sanyam Bhupendrakmar Ravne 
// Date         : 27/11/2025
//
////////////////////////////////////////////////////////////////////////////////

void struprX(char str[])
{
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
        }
        str++;
    }    
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter string : \n");
    scanf("%[^'\n]s",Arr);   
    
    struprX(Arr);
    
    printf("Updated String is : %s\n",Arr);

    return 0;
}