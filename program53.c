#include<stdio.h>

void CountFactersNonFactors(int iNo)
{
    int icnt = 0, iFrequncy1= 0, iFrequncy2= 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(icnt = 1; icnt < iNo ; icnt++)
    {
        if(( iNo % icnt)== 0)
        {
            iFrequncy1++;
        }
        else
        {
            iFrequncy2++;
        }
    }
    printf("Number of Factors are :%d\n",iFrequncy1);
    printf("Number of NonFactors are :%d\n",iFrequncy2);
}

int main()
{
    int iValue = 0;

    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    CountFactersNonFactors(iValue);

    return 0;
}