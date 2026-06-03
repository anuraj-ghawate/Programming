#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////
//
//  Name : Factorial
//  Description : Returns Difference Between Even And Odd Factorial Of Integer
//  Input : int
//  Output : int
//  Author : Anuraj Ghawate
//
///////////////////////////////////////////////////////////////////////////////////////

int Factorial(int iNo)
{
    int iCnt = 0;
    int iOddFact = 1;
    int iEvenFact = 1;
    int iDifference = 0;

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
        else
        {
            iOddFact = iOddFact * iCnt;
        }

        iCnt--;
    }

    iDifference = iEvenFact - iOddFact;

    return iDifference;
    
}

int main()
{
    int iValue = 0;
    int iResult = 0;

    printf("Enter The Number : \n");
    scanf("%d",&iValue);

    iResult = Factorial(iValue);

    printf("facorial difference is : %d\n",iResult);

    return 0;
}