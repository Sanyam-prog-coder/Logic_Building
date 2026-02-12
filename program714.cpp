// Input : 12
// output :  1  2   3   4   6 

#include<iostream>
using namespace std;

bool CheckPerfect(int iNo)
{
    static int iCnt = 1;
    static int iSum = 0;

    if(iCnt <=(iNo /2))
    {
        if(iNo % iCnt == 0)
        {
            iSum = iSum + iCnt;
        }
        iCnt++;
        CheckPerfect(iNo);
    }

    if(iSum == iNo)
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
    int iValue = 0; 
    bool bRet = 0;

    cout<<"Enter Number : ";
    cin>>iValue;
    
    bRet = CheckPerfect(iValue);

    if(bRet == true)
    {
        cout<<"Its a perfect number\n";
    }
    else
    {
        cout<<"Its Not a perfect Number\n";
    }

    return 0;
}