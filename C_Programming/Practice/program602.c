#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>
#include<sys/stat.h>

#define BUFFER_SIZE 1024

void DisplayFileInformation(char FileName[])
{
    struct stat sobj;
    
    stat(FileName,&sobj);

    printf("File Name : %s\n",FileName);
    printf("Inode Number : %llu\n",sobj.st_ino);
    printf("File Size Is : %lld\n",(long long)sobj.st_size);

}

int main()
{
    char fName[30] = {'\0'};
    int iRet = 0;

    printf("Enter The File Name : \n");
    scanf("%[^'\n']s",fName);

    DisplayFileInformation(fName);

    
    return 0;
}