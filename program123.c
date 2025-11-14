#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int isize)
{
    int icnt = 0;

    for(icnt = 0; icnt < isize; icnt++)
    {
        printf("%d\n",Arr[icnt]);
    }
}

int main()
{
    int ilength = 0;
    int *ptr = NULL;
    int icnt = 0;

    printf("Enter Number of Element : ");
    scanf("%d",&ilength);

    ptr = (int *)malloc(ilength * sizeof(int));

    printf("Enter the Elements : \n");
    for(icnt = 0; icnt < ilength; icnt++)
    {
        scanf("%d",&ptr[icnt]);
    }

    Display(ptr,ilength);

    free(ptr);

    return 0;
}