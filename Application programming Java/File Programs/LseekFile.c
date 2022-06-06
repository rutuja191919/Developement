#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>  //file control

int main()
{
	char fname[30] = "\0";
	int fd = 0, ret = 0;   //file descriptor is just a unique number for file called as file handle 
	char Data[11] = "\0";
	
	printf("Enter the file name that you want to open\n");
    scanf("%s",fname);
	 
	fd = open(fname,O_RDWR);   //O_RDWR = Macro
	if(fd == -1)
	{
		printf("Unable to open file\n");
		return -1;
	}
	else
	{
		printf("File is successfully opened with fd : %d\n",fd);
	}
	
	lseek(fd,-7,2);  //for shifting
	
	// 1 : File Descriptor   kashat
	// 2 : Displacement      kitine halchal
	// 3 : from where        kuthun (0 : start, 1 : current, 2 : endoffile) 
	
	read(fd,Data,6);
	
	printf("Data from file is : %6s\n",Data);   //It may contain garbage ahead
	
	//write(1,Data,6);  internally everyting is considered as file in OS 
	
	close(fd);
	
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