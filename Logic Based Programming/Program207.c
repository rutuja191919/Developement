//Use of lseek function

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdbool.h>
#include<string.h>

int main()
{
 char Fname[20];
 int fd = 0;
 char Data[10];
 
 printf("Enter first file name to read\n");
 scanf("%s",Fname);
 
 fd = open(Fname,O_RDONLY);
 
 if(fd == -1)
 {
  printf("Unable to open the file\n");
  return -1;
 }

 lseek(fd,-5,2);  //0 : starting point  1 : Current position  2 : End position
 
 read(fd,Data,5);  
 
 write(1,Data,5);
 
 
 return 0;
}
