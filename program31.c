// * * * * *

#include<stdio.h>

void Display()
{
    int icnt = 0;

    for(icnt = 1; icnt<= 5; icnt++)
    {
        printf("*\t",icnt);
    }
}

int main()
{
    Display();

    return 0;
}