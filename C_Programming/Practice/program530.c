//4
// 4*3*2*1 = 24


#include<stdio.h>

typedef unsigned long int ULONG;

ULONG Factorial(int iNo)
{
    static ULONG iFact = 1;

     if(iNo != 0)
     {
        iFact = iFact*iNo;
        Factorial(iNo -1);
     }

     return iFact;
}

int main()
{
    int iValue = 0;
    ULONG iRet = 0;

    printf("Enter Frequency : \n");
    scanf("%d",&iValue);
    
    iRet = Factorial(iValue);
    
    printf("Factorial Is : %lu\n",iRet);
    
    return 0;
}