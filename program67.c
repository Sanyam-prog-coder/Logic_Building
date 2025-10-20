// Iteration
#include<stdio.h>

void DisplayDigits(int iNo)
{
    int iDigit = 0;

    printf("_______________________________\n");
    printf("Original Value of iNo is : %d\n",iNo);
    
    while(iNo != 0)
    {
        printf("_______________________________\n");
        iDigit = iNo % 10;
        printf("iDigit is : %d\n",iDigit);
        iNo = iNo / 10;
        printf("iNo is : %d\n",iNo);
    }
   
    printf("_______________________________\n");
}
int main()
{
    int iValue = 0;
    

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    DisplayDigits(iValue);
    

    return 0;
}