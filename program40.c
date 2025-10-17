// 2 4   6  8  10

#include<stdio.h>

void Display(int iNo)
{
    int icnt = 0;

    for(icnt = 2; icnt<= iNo; icnt=icnt+2)
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