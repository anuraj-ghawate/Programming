#include<stdio.h>

void Dsiplay(int iNo)
{
    if(iNo != 0)
    {
        printf("Jay Ganesh...%d\n",iNo);

        Dsiplay(iNo--); //post decrement (issue)
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