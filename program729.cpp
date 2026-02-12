#include<iostream>
#include<stdio.h>

using namespace std;

void strDisplayRev (char *str)
{
    if(*str != '\0')
    {
        strDisplayRev(str+1);
        cout<<*str<<"\n";
    }
}
int main()
{
    char Arr[50] = {'\0'};
    int iRet = 0;

    printf("Enter String : ");
    scanf("%[^'\n']s",Arr);

    strDisplayRev(Arr);
    
    return 0;
}