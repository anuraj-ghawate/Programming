#include<stdio.h>

void ReverseDisplay(char *Str)
{
    printf("%s",Str);
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter A String : \n");
    scanf("%[^'\n']s",Arr);

    ReverseDisplay(Arr);

    return 0;
}