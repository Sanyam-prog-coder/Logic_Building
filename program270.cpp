#include<iostream>
using namespace std;

template <class T>
float Summation(T Arr[], int iSize)
{
    int iCnt = 0;
    T iSum = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return iSum;
}
int main()
{
    float Brr[] = {10.1f,20.2f,30.5f,40.4f,50.3f};
    float iRet = 0;

    iRet = Summation(Brr, 5);

    cout<<"Summation iS :"<<iRet<<"\n";

    return 0;
}