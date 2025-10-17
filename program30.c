// 1 2 3 4 5

#include<stdio.h>

void Display()
{
    int icnt = 0;

    icnt = 1;
    while(icnt<= 5)
    {
        printf("%d\t",icnt);
        icnt++;
    }
}

int main()
{
    Display();

    return 0;
}