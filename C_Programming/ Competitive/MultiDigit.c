#include<stdio.h>

int MultiDigits(int iNo)
{
    int iDigit = 0;
    int iMultiplication = 1;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit != 0)
        {
             iMultiplication = iMultiplication * iDigit;
        }
       
        iNo = iNo / 10;
    }

    return iMultiplication;
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    iRet = MultiDigits(iValue);

    printf("Multiplication Of all digits is : %d \n",iRet);

    return 0;
}