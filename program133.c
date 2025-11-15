#include<stdio.h>
#include<stdlib.h>


int main()
{
    int iLength = 0, iCnt = 0;
    int *iptr = NULL;
    
    printf("Enter the number of elements : \n ");
    scanf("%d",&iLength);

    // Step 1 : Allocate the Memory
    iptr = (int *)malloc(iLength * sizeof(int));

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
    // Call to the Function which contains the bussiness logic
    // Fun(iptr, iLength);

    // Step 3 : Free the memory
    free(iptr);
    
    return 0;
}