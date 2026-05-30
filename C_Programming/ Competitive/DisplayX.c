#include<stdio.h>

void Display()
{
    int iCnt = 0;

    iCnt = 5;
    while(iCnt > 0)
    {
        printf("%d \t",iCnt);
        iCnt--;
    }
}

int main()
{
    Display();

    return 0;
}