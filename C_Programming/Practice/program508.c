#include<stdio.h>

void Dsiplay()
{
    auto int i = 0;

    i = 1;
    if(i <= 4)
    {
        printf("Jay Ganesh...\n");
        i++;
        Dsiplay();
    }
}

int main()
{
    Dsiplay();
    
    return 0;
}