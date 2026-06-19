#include<stdio.h>

void strlenX(char *str)
{
  *str = 'A'; // Issue
}

int main()
{
   char Arr[50] = {'\0'};

   printf("Enter A String : \n");
   scanf("%[^'\n']s",Arr); // Regular Expression
    
   strlenX(Arr);

   printf("String Is : %s\n",Arr);

   return 0;
}