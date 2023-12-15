
//5.To read the data from the file

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>


int main()
{
    int fd =0;
    int iRet = 0;
    char Arr[50] = {'\0'};
   
     fd = open("Marvellous.txt",O_RDWR);

     if(fd == -1)
     {
         printf("Unable to create file\n");
     }

     else
     {
        iRet = read(fd,Arr,22);
        printf("%d byetes gets successfully read from the file\n",iRet);
        
        printf("%s\n",Arr);

        close(fd);
         
     }
    
    return 0;
    
}