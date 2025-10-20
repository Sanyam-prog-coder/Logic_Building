#include<stdio.h>

int CountNonFactors(int iNo)
{
    int icnt = 0, iFrequncy = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(icnt = 1; icnt< iNo ; icnt++)
    {
        if(( iNo % icnt)!= 0)
        {
            iFrequncy++;
        }
    }
    return iFrequncy;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    iRet = CountNonFactors(iValue);

    printf("Number of NonFactors are : %d\n",iRet);

    return 0;
}