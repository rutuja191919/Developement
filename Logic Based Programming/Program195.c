//File Handling : open the file and write the data into the file

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{
    char Fname[20];
    char Data[100];
    int iRet = 0;

    int fd = 0; //File descriptor

    printf("Enter file name to open\n");
    scanf("%s",Fname);

    fd = open(Fname,O_RDWR | O_APPEND); //O_WRONLY    O_RDWR   : macros
    if(fd == -1)
    { 
      printf("Unable to open the file\n");
      return -1;  //Failure
    }
	
    printf("File is successfully opened with FD %d\n",fd);
    
    iRet = read(fd,Data,10);
    
    printf("The %d bytes gets successfully read from the file\n",iRet);

    printf("The data from the file is :\n");
    
    write(1,Data,iRet);
    
    return 0;
}
