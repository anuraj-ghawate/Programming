#include<stdio.h>


int main()
{
   char Arr[20] = {'\0'};

   printf("Enter A String : \n");
   scanf("%[^'\n']s",Arr);

   printf("%s\n",Arr);

    return 0;
}