#include<stdio.h>

void ReverseDisplay(char *Str)
{
    char *start = NULL;

    start = Str;

    while (*Str != 0)
    {
        Str++;
    }

    Str--;
    
    while (start <= Str)
    {
       printf("%c",*Str);
       Str--;
    }

    printf("\n");
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter A String : \n");
    scanf("%[^'\n']s",Arr);

    ReverseDisplay(Arr);

    return 0;
}