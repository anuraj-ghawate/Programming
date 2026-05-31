#include<stdio.h>

void Number(int iNo)
{
    if(iNo < 50)
    {
        printf("Small\n");
    }
    else if(iNo < 100)
    {
        printf("medium");
    }
    else
    {
        printf("Large");
    }
    
}

int main()
{
    int iValue = 0;

    printf("Enter the Number :\n");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;
}