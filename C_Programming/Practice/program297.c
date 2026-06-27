#include<stdio.h>

// call by value
void Swap(int No1, int No2)
{
    int temp = 0;

    temp = No1;
    No1 = No2;
    No2 = temp;
}

int main()
{
   int i = 11;
   int j = 21;

   Swap(i,j);
   
   printf("i : %d\n",i);
   printf("j : %d\n",j);

    return 0;
}