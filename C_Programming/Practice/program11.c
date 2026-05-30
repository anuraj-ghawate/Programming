/*
    START
        Accept number as No
        If No is completely divisible by 2
            then print Even
        Otherwise 
            print Odd
    STOP

    START
        Accept number as No
        Devide No by 2
        If remainder is 0
            then print as Even
        otherwise
            print as Odd

    STOP

*/
#include<stdio.h>

int main()
{
    int iValue = 0;
    int iRemainder = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRemainder = iValue % 2;

    if(iRemainder == 0)
    {
        printf("Number Is Even\n");
    }
    else
    {
        printf("Number Is Odd\n");
    }
    
    return 0;
}