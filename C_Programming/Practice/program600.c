#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

#define BUFFER_SIZE 1024

int CalculateFileSize(char FileName[])
{
    int Buffer[BUFFER_SIZE] = {'\0'};
    int fd = 0;
    int iRet = 0;
    int iSize = 0;

    fd = open(FileName,O_RDONLY);

    if(fd == -1)
    {
        printf("Unable To Open File\n");
        return -1;
    }
    
    while((iRet = read(fd,Buffer,sizeof(Buffer))) != 0)
    {
        iSize = iSize + iRet;
    }
    close(fd);

    return iSize;
}

int main()
{
    char fName[30] = {'\0'};
    int iRet = 0;

    printf("Enter The File Name : \n");
    scanf("%[^'\n']s",fName);

    iRet = CalculateFileSize(fName);

    printf("Size Of File Is : %d Bytes\n",iRet);
    
    return 0;
}