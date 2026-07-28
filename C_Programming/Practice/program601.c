#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>
#include<sys/stat.h>

#define BUFFER_SIZE 1024

int CalculateFileSize(char FileName[])
{
    struct stat sobj;
    
    stat(FileName,&sobj);

    return sobj.st_size;
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