#include<stdio.h>

//////////////////////////////////////////////////////////////////////////
//
//  Name : FactDiff
//  input  : int
//  Output : int
//  Description : Performs Difference Between Factors And
//                  Non Factors of Integer
//  Author : Anuraj Ghawate
//  Date : 28-05-2026
//
//////////////////////////////////////////////////////////////////////////

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iSumFact = 0;
    int iSumNonFact = 0;
    int iResult = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt)==0)
        {
            iSumFact= iSumFact + iCnt;
        }
        else
        {
            iSumNonFact = iSumNonFact + iCnt;
        }
    }

    iResult = iSumFact - iSumNonFact;

    return iResult;

}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter The Number :\n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("Difference Between Factors & Non Factors Is : %d\n",iRet);

    return 0;
}