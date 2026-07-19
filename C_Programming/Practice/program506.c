#include<stdio.h>

void Dsiplay()
{
    static int i = 1;
    printf("Jay Ganesh... %d\n",i);
    i++;
    
    Dsiplay();
}

int main()
{
    Dsiplay();
 
    return 0;
}