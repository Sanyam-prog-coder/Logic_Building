#include<stdio.h>
#include<stdlib.h>

int Sumation(int Arr[], int isize)
{
    int icnt = 0;
    int isum = 0;

    for(icnt = 0; icnt < isize; icnt++)
    {
        isum = isum + Arr[icnt];
    }
    return isum;
}

int main()
{
    int ilength = 0;
    int *ptr = NULL;
    int icnt = 0;
    int iRet = 0;

    printf("Enter Number of Element : ");
    scanf("%d",&ilength);

    ptr = (int *)malloc(ilength * sizeof(int));
    if(NULL == ptr)              // Industrial way of coading
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter the Elements : \n");
    for(icnt = 0; icnt < ilength; icnt++)
    {
        scanf("%d",&ptr[icnt]);
    }

    iRet = Sumation(ptr,ilength);
    
    printf("Addition is  : %d\n",iRet);

    free(ptr);

    return 0;
}