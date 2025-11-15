#include<stdio.h>
#include<stdlib.h>

typedef  int * IPTR;

int Maximum(int Arr[], int iSize)
{
    int iCnt = 0, iMax = 0;             

    for(iMax = Arr[iCnt], iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax;
}

int main()
{
    int iLength = 0, iCnt = 0, iRet = 0;
    IPTR iptr = NULL;
    
    printf("Enter the number of elements : \n ");
    scanf("%d",&iLength);

    // Step 1 : Allocate the Memory
    iptr = (IPTR)malloc(iLength * sizeof(int));

    if(NULL == iptr)
    {
        printf("Unable to allocate the memory \n");
        return -1;
    }

    printf("Enter the values : \n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&iptr[iCnt]);
    }

    // Step 2 : Use the Memory 
    iRet = Maximum(iptr, iLength);
    
    printf("Maximum Number is %d\n",iRet);

    // Step 3 : Free the memory
    free(iptr);
    
    return 0;
}