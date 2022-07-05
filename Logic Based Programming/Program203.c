//Maximum throghtput in minimum hardware movement

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

#define FILESIZE 1024

void CountSmallCapital(char Fname[])
{
    char Data[FILESIZE]; 
    int iRet = 0, fd = 0, i = 0;
    int iCntSmall = 0, iCntLarge = 0; 
    
    fd = open(Fname,O_RDWR); 
    if(fd == -1)
    { 
      printf("Unable to open the file\n");
      return;
    }
	
    printf("File is successfully opened with FD %d\n",fd);
    
    while((iRet = read(fd,Data,sizeof(Data)))!= 0)
    {
        for(i = 0; i < iRet; i++)
        {
         if(Data[i] >= 'a' && Data[i] <= 'z')
         {
           iCntSmall++;
         }
         if(Data[i] >= 'A' && Data[i] <= 'Z')
         {
           iCntLarge++;
         }
        }
    }
    
    printf("The number of small charcters are : %d\n",iCntSmall);
    printf("The number of capital charcters are : %d\n",iCntLarge);
    
    close(fd);
} 
int main()
{
    char Fname[20];
    int iRet = 0;
    
    printf("Enter file name to open\n");
    scanf("%s",Fname);
    
    CountSmallCapital(Fname);
    
    return 0;
}
