#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CheckPrime
//  Description :   It Use To Perform Checking of given Prime number 
//  Auther :        Sanyam Bhupendrakumar Ravne
//  Date :          16/10/2025
//
////////////////////////////////////////////////////////////////////////////////////

bool CheckPrime(int iNo)
{
    int icnt = 0, iFrequncy = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(icnt = 2; icnt <= (iNo /2); icnt++)
    {
        if(( iNo % icnt)== 0)
        {
            iFrequncy++;
        }
        
    }
    if(iFrequncy == 0)      // No factors
    {
        return true;
    }
    else                    // Atleastt one factors
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    bRet = CheckPrime(iValue);

    if(bRet == true)
    {
        printf("%d is Prime number\n",iValue);
    }
    else
    {
        printf("%d is Not a Prime number\n",iValue);
    }
    return 0;
}