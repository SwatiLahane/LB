

// 4 to write the data into the file 

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>


int main()
{
    int fd =0;
    int iRet = 0;
    char Arr[] = "Angular Web development";
   
     fd = open("Marvellous.txt",O_RDWR | O_APPEND);

     if(fd == -1)
     {
         printf("Unable to create file\n");
     }

     else
     {
        iRet = write(fd,Arr,23);
        printf("%d byetes gets successfully written into the file\n",iRet);

        close(fd);
         
     }
    
    return 0;
    
}