#include<stdio.h>
#include<fcntl.h>
#include<unistd.h> // Only Linux Based Operating System
#include<string.h>

#define BUFFER_SIZE 100

int main()
{
    int fd = 0;
    int iRet = 0;
    char Data[BUFFER_SIZE] = {'\0'};

    fd = open("Marvellous.txt",O_RDONLY);

    if(fd == -1)
    {
        printf("Unable To Open File\n");
    }
    else
    {
        lseek(fd,5,0);

        iRet = read(fd,Data,10);

        printf("%d Bytes Gets Succesfully Read %d\n",iRet);

        printf("Data From File Is : %s\n",Data);

//////////////////////////////////////////////////////////////////////////////////////////////
        memset(Data,'\0',sizeof(Data));
        
        lseek(fd,5,1);

        iRet = read(fd,Data,10);

        printf("%d Bytes Gets Succesfully Read %d\n",iRet);

        printf("Data From File Is : %s\n",Data);

        close(fd);
    }

    
    return 0;
}