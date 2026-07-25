#include<stdio.h>
#include<fcntl.h>

int main()
{
    int fd = 0;

    fd = open("Marvellous.txt",O_RDONLY);

    if(fd == -1)
    {
        printf("Unable To Open File\n");
    }
    else
    {
        printf("File Gets Sucessfully Opened With FD : %d\n",fd);
    }


    return 0;
}