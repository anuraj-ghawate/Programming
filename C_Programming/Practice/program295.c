#include<stdio.h>

void strrevX(char *Str)
{
    char *start = NULL;
    char *end = NULL;

    start = Str;

    while (*Str != 0)
    {
        Str++;
    }

    Str--;
    
    while (start <= Str)
    {
       printf("%s\n",Str);
       Str--;
    }

    printf("\n");
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter A String : \n");
    scanf("%[^'\n']s",Arr);

    strrevX(Arr);

    return 0;
}