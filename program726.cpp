#include<iostream>
#include<stdio.h>

using namespace std;

void strDisplay (char *str)
{
    while(*str != '\0')
    {
        cout<<*str<<"\n";
        str++;
    }
}
int main()
{
    char Arr[50] = {'\0'};
    int iRet = 0;

    printf("Enter String : ");
    scanf("%[^'\n']s",Arr);

    strDisplay(Arr);
    
    return 0;
}