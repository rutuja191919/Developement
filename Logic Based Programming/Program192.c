//File Handling

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{
    char Fname[20];
    char Data[100];

    int fd = 0; //File descriptor

    printf("Enter file name to open\n");
    scanf("%s",Fname);

    fd = open(Fname,O_RDONLY); //O_WRONLY    O_RDWR   : macros
    if(fd == -1)
    { 
      printf("Unable to open the file\n");
      return -1;  //Failure
    }
	
    printf("File is successfully opened with FD %d\n",fd);

    return 0;
}
