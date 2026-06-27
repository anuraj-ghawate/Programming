#include<stdio.h>

int main()
{
    int iNo = 0;
    int iMask = 4;
    int iAns = 0;

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