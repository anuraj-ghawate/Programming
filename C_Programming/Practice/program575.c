#include<stdio.h>
#include<fcntl.h>
#include<unistd.h> // Only Linux Based Operating System

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

        close(fd);
    }

    


    return 0;
}