#include<stdio.h>

int main()
{
    unsigned int iNo = 0;
    unsigned int iMask = 4;
    unsigned int iAns = 0;

    printf("Enter Number\n");
    scanf("%d",&iNo);

    iAns = iNo & iMask;

    if(iAns == iMask)
    {
        printf("Third Bit Is On");
    }
    else
    {
        printf("Third Bit Is Off");
    }
    

    return 0;
}