#include<stdio.h>
#include<fcntl.h>
#include<unistd.h> // Only Linux Based Operating System
#include<string.h>

int main()
{
    int fd = 0;
    int iRet = 0;
    char Data[100] = {'\0'};
    char DataX[100] = {'\0'};


    fd = open("Marvellous.txt",O_RDONLY);

    if(fd == -1)
    {
        printf("Unable To Open File\n");
    }
    else
    {
        printf("File Gets Sucessfully Opened With FD : %d\n",fd);

        iRet = read(fd,Data,13);

        printf("%d Bytes Gets Succesfully Read \n",iRet);

        printf("Data From File Is : %s\n",Data);


        iRet = read(fd,DataX,3);

        printf("%d Bytes Gets Succesfully Read \n",iRet);

        printf("Data From File Is : %s\n",DataX);


    
        close(fd);
    }

    


    return 0;
}