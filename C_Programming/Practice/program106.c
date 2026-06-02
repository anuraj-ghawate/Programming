#include<stdio.h>

void Display(int *iPtr)
{
    printf("%d\n",*iPtr); //10

    iPtr++;

    printf("%d\n",*iPtr); //20

    iPtr++;

    printf("%d\n",*iPtr); //30


}
int main()
{
   int Arr[5] = {10,20,30,40,50};


   Display(Arr);

    return 0;
}