#include<stdio.h>
#include<stdlib.h>

float Average(int Arr[], int isize)
{
    int icnt = 0;
    int iSum = 0;

    for(icnt = 0; icnt < isize; icnt++)
    {
        if((Arr[icnt] % 2) == 1);
        {
            iSum =  iSum + Arr[icnt];
        }
    }
    return ((float)iSum / (float)isize);          
}

int main()
{
    int ilength = 0;
    int *ptr = NULL;
    int icnt = 0;
    float fRet = 0.0f;

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

    fRet = Average(ptr,ilength);
    
    printf("Average is : %f\n",fRet);

    free(ptr);

    return 0;
}