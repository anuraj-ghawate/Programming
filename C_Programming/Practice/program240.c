#include<stdio.h>

int main()
{
   char Arr[50] = {'\0'};

   printf("Enter A String : \n");
   scanf("%s",Arr); // Issue
    
   printf("Enterd String Is : %s\n",Arr);

   return 0;
}