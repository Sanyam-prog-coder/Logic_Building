#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
// Function     : CountDigit
// Description  : Accept String From user And count Digit from it
// Auther       : Sanyam Bhupendrakmar Ravne 
// Date         : 27/11/2025
//
////////////////////////////////////////////////////////////////////////////////

void CountDigits(char str[])
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str >= 48) && (*str <= 57))
        {
             iCount++;
        }
        str++;
    }
    printf("Number of Digits  : %d\n",iCount);
    
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter string : \n");
    scanf("%[^'\n]s",Arr);   
    
    CountDigits(Arr);
    
    return 0;
}