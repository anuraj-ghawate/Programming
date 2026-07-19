#include<stdio.h>

void Dsiplay(int iNo)
{
    auto int i = 0;

    i = 1;
    while(i <= iNo)
    {
        printf("Jay Ganesh...\n");
        i++;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Frequency : \n");
    scanf("%d",&iValue);
    
    Dsiplay(iValue);
    
    return 0;
}