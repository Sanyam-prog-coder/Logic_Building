// Input : 12
// output :  1  2   3   4   6 

#include<iostream>
using namespace std;

void DisplayFactore(int iNo)
{
    int iCnt = 0;

    iCnt = 1;
    while(iCnt <=(iNo /2))
    {
        if(iNo % iCnt == 0)
        {
            cout<<iCnt<<"\n";
        }
        iCnt++;
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