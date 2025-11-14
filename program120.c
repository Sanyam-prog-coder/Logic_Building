#include<stdio.h>

void Display(int Arr[])
{
    int icnt = 0;

    for(icnt = 0; icnt < 7; icnt++)
    {
        printf("%d\n",Arr[icnt]);
    }
}

int main()
{
    int Brr[] = {10,20,30,40,50,60,70};     // Chagned
    
    Display(Brr);

    return 0;
}