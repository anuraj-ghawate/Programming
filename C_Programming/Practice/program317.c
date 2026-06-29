#include<stdio.h>

typedef unsigned int UINT;

int main()
{
    UINT iNo = 0;
    UINT iMask = 0x1;
    UINT iAns = 0;
    UINT iPos = 0;

    printf("Enter Number\n");
    scanf("%d",&iNo);

    printf("Enter Position\n");
    scanf("%d",&iPos);

    iMask = iMask << (iPos-1);

    iAns = iNo & iMask;

    if(iAns == iMask)
    {
        printf("Bit Is On");
    }
    else
    {
        printf("Bit Is Off");
    }
     return 0;
}