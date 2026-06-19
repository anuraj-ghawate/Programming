#include<stdio.h>
#include<string.h>

int main()
{
    char *str = "Ganesh"; 
    int iCount = 0;

    printf("Length of String Is : %lu\n",strlen(str));

    while (*str != '\0')
    {
        iCount++;
        str++;
    }
    
    printf("Length of String Is : %d\n",iCount);

   
    

    
    
   return 0;
}