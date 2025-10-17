// 1 2 3 4 5

#include<stdio.h>

void Display(int iNo)
{
    int icnt = 0;

    for(icnt = 1; icnt<= iNo; icnt++)
    {
        printf("%d\t",icnt);
    }
}

int main()
{
    Display(108);

    return 0;
}