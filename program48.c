// Factors of  6
#include<stdio.h>

void DisplayNonFactors(int iNo)
{
    int icnt = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }
     for(icnt = 1; icnt < iNo; icnt++)
    {
        if((iNo % icnt) == 0)
        {
            printf("%d\n",icnt);
        }
    }
}
// Time COmplexity : O(N)
int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    DisplayNonFactors(iValue);
   
    return 0;
}