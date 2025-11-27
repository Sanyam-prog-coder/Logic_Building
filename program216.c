#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
// Function     :
// Description  : Accept Array from user And Display it 
// Auther       : Sanyam Bhupendrakmar Ravne 
// Date         : 27/11/2025
//
////////////////////////////////////////////////////////////////////////////////

void Display(char str[])
{
    while(*str != '\0')
    {
        printf("%c\n",*str);
        str++;
    }
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter string : \n");
    scanf("%[^'\n]s",Arr);                 

    Display(Arr);

    return 0;
}