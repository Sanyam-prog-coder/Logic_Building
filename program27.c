#include<stdio.h>
// Dynamic function

void Display(int iFrequency)
{
    int icnt = 0;
    //Filter
    if(iFrequency < 0)
    {
        printf("Invalid input\n");
        return;
    }
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