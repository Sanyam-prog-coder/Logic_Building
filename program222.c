#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
// Function     : CountVowel
// Description  : Accept String From user and count Capital And small Vowel
// Auther       : Sanyam Bhupendrakmar Ravne 
// Date         : 27/11/2025
//
////////////////////////////////////////////////////////////////////////////////


// a    e   i   o   u
int CountVowel(char str[])
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str == 'a') || (*str == 'e') ||(*str == 'i') || (*str == 'o')|| (*str == 'u')
        ||(*str == 'A') || (*str == 'E') ||(*str == 'I') || (*str == 'O')|| (*str == 'U'))
        {
            iCount++;
        }
        str++;

    }
    return iCount;
}

int main()
{
    char Arr[50] = {'\0'};
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n]s",Arr);                 

    iRet = CountVowel(Arr);
    printf("Count of a is : %d\n",iRet);

    return 0;
}