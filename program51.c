#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CoumtimgFactors
//  Description :   It Use To Perform Counting of Factors From Givven Number
//  Auther :        Sanyam Bhupendrakumar Ravne
//  Date :          16/10/2025
//
////////////////////////////////////////////////////////////////////////////////////

int CountFactors(int iNo)
{
    int icnt = 0, iFrequncy = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(icnt = 1; icnt<= (iNo /2); icnt++)
    {
        if(( iNo % icnt)== 0)
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

    iRet = CountFactors(iValue);

    printf("Number of Factors are : %d\n",iRet);

    return 0;
}