#include<stdio.h>
#include<stdbool.h>

bool checkDivisible(int iNO1, int iNo2)
{
    if ((iNO1 % iNo2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    bool bRet = false;

    printf("ENTER first Number : \n");
    scanf("%d",&iValue1);

    printf("ENTER first Number : \n");
    scanf("%d",&iValue2);

    bRet = checkDivisible(iValue1,iValue2);

    if (bRet == true)
    {
        printf("It is Completely Divisible\n");
    }
    else
    {
        printf("It is not Divisible\n");
    }

    return 0;
}