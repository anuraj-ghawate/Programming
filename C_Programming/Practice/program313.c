#include<stdio.h>

typedef unsigned int UINT;

int main()
{
    UINT iNo = 0;
    UINT iMask = 0x00010000;
    UINT iAns = 0;

    printf("Enter Number\n");
    scanf("%d",&iNo);

    iAns = iNo & iMask;

    if(iAns == iMask)
    {
        printf("17th Bit Is On");
    }
    else
    {
        printf("17th Bit Is Off");
    }
    

    return 0;
}