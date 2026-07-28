#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

#define BUFFER_SIZE 1024

void FileCopy(char FileNameSrc[],char FileNameDest[])
{
    int Buffer[BUFFER_SIZE] = {'\0'};
    int fdScrc = 0;
    int fdDest = 0;
    int iRet = 0;

    fdScrc = open(FileNameSrc,O_RDONLY);

    if(fdScrc == -1)
    {
        printf("Unable To Open Source File\n");
        return ;
    }

    fdDest = creat(FileNameDest,0777);

    if(fdDest == -1)
    {
        printf("Unable To Create Destination File\n");
        return ;
    }
    
    while((iRet = read(fdScrc,Buffer,sizeof(Buffer))) != 0)
    {
        write(fdDest,Buffer,iRet);
        memset(Buffer,'\0',sizeof(Buffer));
    }

    close(fdScrc);
    close(fdDest);

}

int main()
{
    char fNameSrc[30] = {'\0'};
    char fNameDest[30] = {'\0'};

    printf("Enter The Source File Name : \n");
    scanf("%[^'\n']s",fNameSrc);

    printf("Enter The Destination File Name : \n");
    scanf(" %[^'\n']s",fNameDest); //Issue Solved

    FileCopy(fNameSrc,fNameDest);

    return 0;
}