#include<stdio.h>
#define INR 70

int DollorToINR(int iDollar)
{
    int iCurrency = 0;
    iCurrency = INR * iDollar;
    return iCurrency;
}

int main()
{
    int iDollar = 0;
    int iResult = 0;

    printf("Enter The Number Of USD : \n");
    scanf("%d",&iDollar);

    iResult = DollorToINR(iDollar);

    printf("Value In INR is : %d\n",iResult);

    return 0;
}