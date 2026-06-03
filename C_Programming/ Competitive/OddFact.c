#include<stdio.h>

int OddFactorial(int iNo)
{
    int iCnt = 0;
    int iOddFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    iCnt = iNo;
    while(iCnt >= 1)
    {
        if((iCnt % 2)!=0)
        {
            iOddFact = iOddFact * iCnt;
        }

        iCnt--;
    }

    return iOddFact;
    
}

int main()
{
    int iValue = 0;
    int iResult = 0;

    printf("Enter The Number : \n");
    scanf("%d",&iValue);

    iResult = OddFactorial(iValue);

    printf("Odd facorial Of Given number Is : %d\n",iResult);

    return 0;
}