#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
// Function     :
// Description  : Accept Name from user and Display it 
// Auther       : Sanyam Bhupendrakmar Ravne 
// Date         : 27/11/2025
//
////////////////////////////////////////////////////////////////////////////////

int main()
{
    char Name[50] = {'\0'};

    printf("Enter Your Name : \n");
    scanf("%s",Name);

    printf("Hello : %s\n",Name);

    return 0;
}