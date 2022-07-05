//Maximum throghtput in minimum hardware movement

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

#define FILESIZE 1024

int CountCapital(char Fname[])
{
    char Data[FILESIZE]; 
    int iRet = 0, fd = 0, i = 0;
    int iCnt = 0; 
    
    fd = open(Fname,O_RDWR); 
    if(fd == -1)
    { 
      printf("Unable to open the file\n");
      return -1;
    }
	
    printf("File is successfully opened with FD %d\n",fd);
    
    while((iRet = read(fd,Data,sizeof(Data)))!= 0)
    {
        for(i = 0; i < iRet; i++)
        {
         if(Data[i] >= 'A' && Data[i] <= 'Z')
         {
           iCnt++;
         }
        }
    }
    
    close(fd);
    
    return iCnt;
} 
int main()
{
    char Fname[20];
    int iRet = 0;
    
    printf("Enter file name to open\n");
    scanf("%s",Fname);
    
    iRet = CountCapital(Fname);
    printf("Number of capital characters in the file are : %d\n",iRet);
    
    return 0;
}
