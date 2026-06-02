// Input : -5
// output : -5  -4  -3  -2  -1  0   1   2   3   4   5 

#include<stdio.h>

void Dsiplay(int iNo)
{
    int iCnt = 0;

    for(iCnt = -iNo; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt);
    }

    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    Dsiplay(iValue);

    return 0;
}