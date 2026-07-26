#include<stdio.h>
#include<fcntl.h>
#include<unistd.h> // Only Linux Based Operating System
#include<string.h>

#define BUFFER_SIZE 100

int main()
{
   unlink("Marvellous.txt");
    
    return 0;
}