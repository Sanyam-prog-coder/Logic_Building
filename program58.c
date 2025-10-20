#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int icnt = 0;
    bool bFlag = false;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    bFlag = true;
    
    for(icnt = 2; icnt <= (iNo /2); icnt++)
    {
        if(( iNo % icnt)== 0)
        {
            bFlag = false;
            break;          // Optimization
        }
        
    }
    
    return bFlag;
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

/*
    Time complexity : for prime - N/2
    TIme Complexity : for non prime - either 1 or 2
*/