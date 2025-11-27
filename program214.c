#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
// Function     :
// Description  : Accept Name from user and Display it one by one
// Auther       : Sanyam Bhupendrakmar Ravne 
// Date         : 27/11/2025
//
////////////////////////////////////////////////////////////////////////////////

void Display(char *str)
{
    printf("%c\n",*str);
    str++;
    printf("%c\n",*str);
    str++;
    printf("%c\n",*str);
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter string : \n");
    scanf("%[^'\n]s",Arr);                 

    Display(Arr);

    return 0;
}