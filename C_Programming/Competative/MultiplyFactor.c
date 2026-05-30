#include<stdio.h>

int MultiFact(int iNo)
{
    int iCnt = 0;
    int iResult = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt)==0)
        {
            iResult = iResult * iCnt;
        }
    }

    return iResult;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter The Number :\n");
    scanf("%d",&iValue);

    iRet = MultiFact(iValue);

    printf("Multiplication Of factors is : %d\n",iRet);


    return 0;
}