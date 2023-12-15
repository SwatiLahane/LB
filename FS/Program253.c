
//accept file name and delete file

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>


int main()
{
    char FileName[30];
    int fd =0;
  
    printf("Enter the name of file that you want to create into current directory\n"); 
    scanf("%s",FileName);

      unlink("FileNsme");
      
    return 0;
    
}