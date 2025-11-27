#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
// Function     : CountALl
// Description  : Accept String From user and count Capital Also small case
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
        else if((*str >= 'a') && (*str <= 'z'))
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