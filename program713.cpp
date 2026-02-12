// Input : 12
// output :  1  2   3   4   6 

#include<iostream>
using namespace std;

int SumFactore(int iNo)
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
        SumFactore(iNo);
    }
    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    cout<<"Enter Number : ";
    cin>>iValue;
    
    iRet = SumFactore(iValue);

    cout<<"Sum of all Factor : "<<iRet<<"\n";

    return 0;
}