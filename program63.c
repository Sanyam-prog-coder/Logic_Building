#include<stdio.h>

int main()
{
    int iNo = 723614;
    int iDigit = 0;

    printf("_______________________________\n");
    printf("Original Value of iNo is : %d\n",iNo);

    printf("_______________________________\n");
    iDigit = iNo % 10;
    printf("iDigit is : %d\n",iDigit);
    iNo = iNo / 10;
    printf("iNo is : %d\n",iNo);

    printf("_______________________________\n");
    iDigit = iNo % 10;
    printf("iDigit is : %d\n",iDigit);
    iNo = iNo / 10;
    printf("iNo is : %d\n",iNo);

    printf("_______________________________\n");
    iDigit = iNo % 10;
    printf("iDigit is : %d\n",iDigit);
    iNo = iNo / 10;
    printf("iNo is : %d\n",iNo);

    printf("_______________________________\n");
    iDigit = iNo % 10;
    printf("iDigit is : %d\n",iDigit);
    iNo = iNo / 10;
    printf("iNo is : %d\n",iNo);

    printf("_______________________________\n");

    return 0;
}