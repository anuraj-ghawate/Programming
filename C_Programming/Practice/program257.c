#include<stdio.h>

int CountSpace( const char *str)
{
  int iCount = 0;

  while (*str != 0)
  {
      if(*str == ' ')
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
    
   iRet = CountSpace(Arr);

   printf("Count Of Spaces is : %d\n",iRet);

   return 0;
}