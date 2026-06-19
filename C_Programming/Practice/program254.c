#include<stdio.h>

int CountSmall( const char *str)
{
  int iCount = 0;

  while (*str != 0)
  {
      if(*str >= 97 && *str <= 122)
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
    
   iRet = CountSmall(Arr);

   printf("Count Of small characters is : %d\n",iRet);

   return 0;
}