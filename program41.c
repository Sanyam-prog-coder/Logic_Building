// 5 4 3  2 1 0

#include<stdio.h>

void Display(int iNo)
{
    int icnt = 0;

    for(icnt = 2; icnt<= iNo; icnt+=2)
    {
        printf("%d\t",icnt);
    }
}
// Time Complexity : O(N/2)

int main()
{
    int iValue =0;
 
    printf("Please enter Frequency : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}