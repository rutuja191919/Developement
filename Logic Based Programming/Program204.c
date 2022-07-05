//Copy the data from one file to another file

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>

#define FILESIZE 1024

void FileCopy(char Source[], char Destination[])
{
  int Fdsrc = 0, Fddest = 0, iRet = 0;
  int Buffer[FILESIZE];
  
  Fdsrc = open(Source, O_RDONLY);
  
  if(Fdsrc == -1)
  {
   printf("Unable to open the file\n");
   return;
  } 
  
  Fddest = creat(Destination, 0777);
  
  if(Fddest == -1)
  {
   printf("Unable to create the file\n");
   return;
  }
  else
  {
   printf("File gets successfully created\n");
  }
  
  while((iRet = read(Fdsrc,Buffer,FILESIZE))!=0)
  {
   write(Fddest,Buffer,iRet);
  }
  
  close(Fdsrc);
  close(Fddest);
}

int main()
{
 char Fname1[20];
 char Fname2[20];
 
 printf("Enter the file name which contains the data\n");
 scanf("%s",Fname1);
 
 printf("Enter the file name that you want to create\n");
 scanf("%s",Fname2);
 
 FileCopy(Fname1, Fname2);
 
 return 0;
}
