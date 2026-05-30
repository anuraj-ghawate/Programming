#include<stdio.h>

void PrintEven(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        return;
    }
    
    iCnt = 1;
    while (iCnt <= iNo)
    {
        printf("%d\n",iCnt * 2);
        iCnt++;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the Number :\n");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}