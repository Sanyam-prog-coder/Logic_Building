#include<stdio.h>
// Dynamic function

void Display(int iFrequency)
{
    int icnt = 0;

    for(icnt = 1; icnt<= iFrequency; icnt++)
    {
        printf("Jay ganesh...\n");
    }
}

int main()
{
    int icount = 0;
    printf("Enter the frequance :\n");
    scanf("%d",&icount);

    Display(icount);

    return 0;
}