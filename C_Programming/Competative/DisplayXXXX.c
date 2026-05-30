#include<stdio.h>

void Aceept(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\t");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter The Number :\n");
    scanf("%d",&iValue);

    Aceept(iValue);

    return 0;
}