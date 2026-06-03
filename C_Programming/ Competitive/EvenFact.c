#include<stdio.h>

int EvenFactorial(int iNo)
{
    int iCnt = 0;
    int iEvenFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    iCnt = iNo;
    while(iCnt >= 1)
    {
        if((iCnt % 2)==0)
        {
            iEvenFact = iEvenFact * iCnt;
        }

        iCnt--;
    }

    return iEvenFact;
    
}

int main()
{
    int iValue = 0;
    int iResult = 0;

    printf("Enter The Number : \n");
    scanf("%d",&iValue);

    iResult = EvenFactorial(iValue);

    printf("Even facorial Of Given number Is : %d\n",iResult);

    return 0;
}