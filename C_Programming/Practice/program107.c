#include<stdio.h>

void Display(int *iPtr)
{
    printf("%d\n",iPtr[0]); //10

    iPtr++;

    printf("%d\n",iPtr[1]); //20

    iPtr++;

    printf("%d\n",iPtr[2]); //30


}
int main()
{
   int Arr[5] = {10,20,30,40,50};


   Display(Arr);

    return 0;
}