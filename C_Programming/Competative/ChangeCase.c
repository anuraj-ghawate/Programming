#include<stdio.h>

void DsiplayConvert(char cValue)
{
    if((cValue >= 'a') && (cValue <= 'z'))
    {
        printf("%c",cValue - 32);
    }
    else
    {
        printf("Wrong input");

    }

}

int main()
{
    char cValue = '\0';

    printf("Enter the character : \n");
    scanf("%c",&cValue);

    DsiplayConvert(cValue);

    return 0;
}