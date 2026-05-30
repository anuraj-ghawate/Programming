#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckVowel(char cValue)
{
    if(         (cValue == 'a' || cValue == 'A') 
            || (cValue == 'e' || cValue == 'E')
            || (cValue == 'i' || cValue == 'I')
            || (cValue == 'o' || cValue == 'O') 
            || (cValue == 'u' || cValue == 'U'))
        {
             return TRUE;
        }
        else
        {
            return FALSE;
        }
}


int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter Character\n");
    scanf("%c",&cValue);

    bRet = CheckVowel(cValue);

    if(bRet == TRUE)
    {
        printf("Character Is Vowel");
    }
    else
    {
        printf("Character Is Not Vowel");
    }

    return 0;
}