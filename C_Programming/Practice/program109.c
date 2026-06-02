#include<stdio.h>

void Display(int Arr[])
{
    printf("%d\n",Arr[0]); //10

    printf("%d\n",Arr[1]); //20

    printf("%d\n",Arr[2]); //30

     printf("%d\n",Arr[3]); //40

      printf("%d\n",Arr[4]); //50


}
int main()
{
   int Brr[5] = {10,20,30,40,50};


   Display(Brr);

    return 0;
}