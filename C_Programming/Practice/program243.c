#include<stdio.h>

void Display(char str[])
{
   printf("Input String Is : %s\n",str);
}

int main()
{
   char Arr[50] = {'\0'};

   printf("Enter A String : \n");
   scanf("%[^'\n']s",Arr); // Regular Expression
    
   Display(Arr);

   return 0;
}