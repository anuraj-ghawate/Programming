#include<stdio.h>

int Count( const char *str)
{
  int iCount = 0;

  while (*str != 0)
  {
    if(*str == 'a' || *str == 'A')
    {
        iCount++;
    }

     str++;
  }
  
  return iCount;
}

int main()
{
   char Arr[50] = {'\0'};
   int iRet = 0;

   printf("Enter A String : \n");
   scanf("%[^'\n']s",Arr); // Regular Expression
    
   iRet = Count(Arr);

   printf("Frequency Is : %d\n",iRet);

   return 0;
}