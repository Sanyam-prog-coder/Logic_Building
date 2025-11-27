#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
// Function     : CountAll
// Description  : Accept String From user And Count all From it
// Auther       : Sanyam Bhupendrakmar Ravne 
// Date         : 27/11/2025
//
////////////////////////////////////////////////////////////////////////////////

void CountAll(char str[])
{
    int iCountSmall = 0, iCountCaptial = 0;

    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
             iCountCaptial++;
        }
        else
        {
             iCountSmall++;
        }
        str++;
    }
    printf("Number of small Character : %d\n",iCountSmall);
    printf("Number of Capital Character : %d\n",iCountCaptial);
    
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter string : \n");
    scanf("%[^'\n]s",Arr);   
    
    CountAll(Arr);
    
    return 0;
}