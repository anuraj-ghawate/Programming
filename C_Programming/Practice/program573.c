#include<stdio.h>
#include<fcntl.h>

int main()
{
    int fd = 0;

    fd = creat("Marvellous.txt",0777);

    if(fd == -1)
    {
        printf("Unable To Create File\n");
    }
    else
    {
        printf("File Gets Sucessfully Created With FD : %d\n",fd);
    }

    return 0;
}