#include<stdio.h>

int strlenX( char * const str)
{
  int iCount = 0;

  while (*str != 0)
  {
    iCount++;
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
    
   iRet = strlenX(Arr);

   printf("Length Of String Is : %d\n",iRet);

   return 0;
}