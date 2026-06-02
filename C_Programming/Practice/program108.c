#include<stdio.h>

void Display(int Arr[])
{
    printf("%d\n",*Arr); //10

    Arr++;

    printf("%d\n",*Arr); //20

    Arr++;

    printf("%d\n",*Arr); //30


}
int main()
{
   int Brr[5] = {10,20,30,40,50};


   Display(Brr);

    return 0;
}