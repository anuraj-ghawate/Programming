#include<stdio.h>

int main()
{
   char Arr[50] = {'\0'};

   printf("Enter A String : \n");
   scanf("%[^'\n']s",Arr); // Regular Expression
    
   printf("Enterd String Is : %s\n",Arr);

   return 0;
}