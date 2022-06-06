#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>  //file control

int main()
{
	char fname[30] = "\0";
	int fd = 0;   //file descriptor is just a unique number for file called as file handle 
	
	printf("Enter the file name that you want to open\n");
    scanf("%s",fname);
	 
	fd = open(fname,O_RDWR);   //O_RDWR = Macro
	if(fd == -1)
	{
		printf("Unable to open file\n");
	}
	else
	{
		printf("File is successfully opened with fd : %d\n",fd);
	}
	return 0;
}


//User 
//Owner   //4 + 2 + 1
//Group   //4 + 2 + 1 
//Other   //4 + 2 + 1


//Operations
//Read     4
//Write    2
//Execute  1