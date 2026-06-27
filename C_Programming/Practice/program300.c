#include<stdio.h>

void strrevX(char *Str)
{
    char *start = NULL;
    char *end = NULL;
    char temp = '\0';
    start = Str;

    while (*Str != 0)
    {
        Str++;
    }

    Str--;

    end = Str;
  
    while (start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
    
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter A String : \n");
    scanf("%[^'\n']s",Arr);

    strrevX(Arr);

    printf("Updated String : %s\n",Arr);

    return 0;
}