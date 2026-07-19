#include<stdio.h>

void Dsiplay()
{
    static int i = 1;

    if(i <= 4)
    {
        printf("Jay Ganesh...%d\n",i);
        i++;
        Dsiplay();
    }
}

int main()
{
    Dsiplay();
    
    return 0;
}