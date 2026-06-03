#include<stdio.h>

int CountEven(int iNo)
{
    int iDigit = 0;
    int iCountEven = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for( ; iNo != 0; iNo = iNo / 10)
    {
        iDigit = iNo % 10;

        if((iDigit % 2) == 0)
        {
            iCountEven++;
        }
    }

    return iCountEven;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    iRet = CountEven(iValue);

    printf("count of even digits is : %d \n",iRet);

    return 0;
}