#include<stdio.h>
#define Meter 1000

int KMtoM(int Kilometer)
{
    int iMeter = 0;

    iMeter = Kilometer * Meter;

    return iMeter;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter KM :\n");
    scanf("%d",&iValue);

    iRet = KMtoM(iValue);

    printf("%d Kilometer In Meters Are : %d\n",iValue,iRet);

    return 0;
}