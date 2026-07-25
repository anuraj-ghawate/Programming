#include<stdio.h>
#include<fcntl.h>
#include<unistd.h> // Only Linux Based Operating System
#include<string.h>

int main()
{
    int fd = 0;
    int iRet = 0;
    char Data[] = "Marvellous Infosystems";

    fd = open("Marvellous.txt",O_RDWR | O_APPEND);

    if(fd == -1)
    {
        printf("Unable To Open File\n");
    }
    else
    {
        printf("File Gets Sucessfully Opened With FD : %d\n",fd);

        iRet = write(fd,Data,strlen(Data));

        printf("%d Bytes Gets Succesfully Written \n",iRet);

        close(fd);
    }

    


    return 0;
}