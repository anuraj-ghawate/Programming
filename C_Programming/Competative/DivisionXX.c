#define ZeroDivision -1

#include<stdio.h>

int Divide(int iNo1, int iNo2)
{
    int iAns = 0;

    if(iNo2 == 0)
    {
        return ZeroDivision;
    }

    iAns = iNo1/ iNo2;

    return iAns;

}

int main()
{
    int iValue1 = 0,  iValue2 = 0;
    int iRet = 0;

    printf("Enter The first Number : \n");
    scanf("%d",&iValue1);

    printf("Enter The Second Number : \n");
    scanf("%d",&iValue2);

    iRet = Divide(iValue1,iValue2);

    if(iRet == ZeroDivision)
    {
        printf("Can Not Divide By Zero");
    }
    else
    {
         printf("Division is : %d",iRet);
    }

    return 0;
}