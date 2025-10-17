// 5 4 3  2 1

#include<stdio.h>

void Display(int iNo)
{
    int icnt = 0;

    for(icnt = iNo; icnt>= 1; icnt--)
    {
        printf("%d\t",icnt);
    }
}

int main()
{
    int iValue =0;
 
    printf("Please enter Frequency : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}