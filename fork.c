#include <stdio.h>
#include <unistd.h>
int main() {
int pid = fork();
if (pid > 0) {
printf("I am the parent process. My child has pid = %d\n", pid);
} else if (pid == 0) {
printf("I am the child process. My pid = %d\n", getpid());
} else {
printf("Fork failed.\n");
}    return 0;   }
