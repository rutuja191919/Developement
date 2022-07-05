//Compare two files data

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdbool.h>
#include<string.h>

#define FILESIZE 1024

bool FileCompare(char Source[], char Destination[])
{
  int Fdsrc = 0, Fddest = 0, iRet1 = 0, iRet2 = 0, iCmp = 0;
  char Buffer1[FILESIZE];
  char Buffer2[FILESIZE];
  
  Fdsrc = open(Source, O_RDONLY);
  
  if(Fdsrc == -1)
  {
   printf("Unable to open source file\n");
  } 
  
  Fddest = open(Destination, O_RDONLY);
  
  if(Fddest == -1)
  {
   printf("Unable to open destination file\n");
  }
  
  while(1)
  {
   iRet1 = read(Fdsrc,Buffer1,FILESIZE);
   iRet2 = read(Fddest,Buffer2,FILESIZE);
   
   if((iRet1 == 0) || (iRet2 == 0) || (iRet1 != iRet2))
   {
    break;
   }
  
   iCmp = memcmp(Buffer1, Buffer2, iRet1);
   if(iCmp != 0)
   {
    break;
   }
  }
  
  if(iRet1 == 0 && iRet2 == 0)
  {
   return true;
  }
  else
  {
   return false;
  }
}

int main()
{
 char Fname1[20];
 char Fname2[20];
 bool bRet = false;
 
 printf("Enter first file name to read\n");
 scanf("%s",Fname1);
 
 printf("Enter second file name in which you want to append\n");
 scanf("%s",Fname2);
 
 bRet = FileCompare(Fname1, Fname2);
 
 if(bRet == true)
 {
  printf("Files are same\n");
 }
 else
 {
  printf("Files are different\n");
 }
 return 0;
}
