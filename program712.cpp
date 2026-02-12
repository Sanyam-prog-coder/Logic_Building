// Input : 12
// output :  1  2   3   4   6 

#include<iostream>
using namespace std;

void DisplayFactore(int iNo)
{
    static int iCnt = 1;

    if(iCnt <=(iNo /2))
    {
        if(iNo % iCnt == 0)
        {
            cout<<iCnt<<"\n";
        }
        iCnt++;
        DisplayFactore(iNo);
    }
}

int main()
{
    int iValue = 0, iRet = 0;

    cout<<"Enter Number : ";
    cin>>iValue;
    
    DisplayFactore(iValue);

    return 0;
}