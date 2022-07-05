//Open the file and calculate length of the file

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int FileLength(char Fname[])
{
    char Data[10]; 
    int iRet = 0;
    int fd = 0;
    int iSum = 0; 
      
    fd = open(Fname,O_RDWR); 
    if(fd == -1)
    { 
      printf("Unable to open the file\n");
      return -1;
    }
	
    printf("File is successfully opened with FD %d\n",fd);
    
    while((iRet = read(fd,Data,sizeof(Data)))!= 0)
    {
	iSum = iSum + iRet;   
    }
    
    close(fd);
    
    return iSum;
} 
int main()
{
    char Fname[20];
    int iRet = 0;
    
    printf("Enter file name to open\n");
    scanf("%s",Fname);
    
    iRet = FileLength(Fname);
    printf("The length of the file is : %d\n",iRet);
    
    return 0;
}
