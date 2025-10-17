// Input : 12   2         Output : True
// Input : 12   3         Output : True
// Input : 12   5         Output : False
// Input : 12   17        Output : Flase

#include<stdio.h>

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("ENTER first Number : \n");
    scanf("%d",&iValue1);

    printf("ENTER first Number : \n");
    scanf("%d",&iValue2);

    if ((iValue1 % iValue2)== 0)
    {
        printf("It is Completely Divisible\n");
    }
    else
    {
        printf("It is not Divisible\n");
    }

    return 0;
}