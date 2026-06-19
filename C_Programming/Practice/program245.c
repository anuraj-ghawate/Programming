#include<stdio.h>

void Display(char *str)
{
  printf("%c\n",*str);
  str++;

  printf("%c\n",*str);
  str++;

  printf("%c\n",*str);
  str++;
  
}

int main()
{
   char Arr[50] = {'\0'};

   printf("Enter A String : \n");
   scanf("%[^'\n']s",Arr); // Regular Expression
    
   Display(Arr);

   return 0;
}