#include<stdio.h>
#include<stdlib.h>

int CountOdd(int Arr[], int isize)
{
    int icnt = 0;
    int iCount = 0;

    for(icnt = 0; icnt < isize; icnt++)
    {
        if((Arr[icnt] % 2) == 1)
        {
            iCount++;
        }
    }
    return iCount;
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

    iRet = CountOdd(ptr,ilength);
    
    printf("Number of Odd elements are : %d\n",iRet);

    free(ptr);

    return 0;
}