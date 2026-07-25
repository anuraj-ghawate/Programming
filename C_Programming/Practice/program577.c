#include<stdio.h>
#include<fcntl.h>
#include<unistd.h> // Only Linux Based Operating System

int main()
{
    int fd = 0;

    int iRet = 0;

    fd = open("Marvellous.txt",O_RDWR);

    if(fd == -1)
    {
        printf("Unable To Open File\n");
    }
    else
    {
        printf("File Gets Sucessfully Opened With FD : %d\n",fd);

        iRet = write(fd,"Jay Ganesh...",13);

        printf("%d Bytes Gets Succesfully Written \n",iRet);

        close(fd);
    }

    


    return 0;
}