// Factors of  6
#include<stdio.h>

void DisplayFactors(int iNo)
{
    int icnt = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }
     for(icnt = 1; (icnt < iNo /2); icnt++)
    {
        if((iNo % icnt) == 0)
        {
            printf("%d\n",icnt);
        }
    }
}
// Time COmplexity : O(N/2)
int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    DisplayFactors(iValue);
   
    return 0;
}