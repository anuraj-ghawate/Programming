#include<stdio.h>
#define SQUAREMETER 0.0929

double SquareMeter(int iValue)
{
    double dSquareMeter = iValue * SQUAREMETER;

    return dSquareMeter;
}

int main()
{
    int iValue = 0;
    double dRet = 0;

    printf("Enter Area In Square Feet : \n");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("Area in square meter is : %lf \n",dRet);

    return 0;
}