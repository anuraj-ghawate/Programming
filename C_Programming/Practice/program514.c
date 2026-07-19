#include<stdio.h>

void Dsiplay(int iNo)
{
    static int i = 1;

    if(i <= iNo)
    {
        printf("Jay Ganesh...%d\n",i);
        i++;
        Dsiplay(iNo);
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