#include <stdio.h>   #include <unistd.h>     #include <stdlib.h>     #include <fcntl.h>      int main(){
int pid=fork(); if(pid==0){     printf("Child: I will run ls using exec()\n");     execl("/bin/ls","ls",NULL);
printf("Child: exec() failed\n");     exit(1);}      else if(pid>0){      printf("Parent: I created a child with pid %d\n",pid);
int fd=open("test.txt",O_CREAT|O_WRONLY,0644); if(fd!=-1){   printf("Parent: File opened, now closing it.\n");      close(fd);}    printf("Parent: Done.\n");}    else{   printf("Fork failed.\n");}   return 0;}
