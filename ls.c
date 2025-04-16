LS using C
#include <stdio.h>       
#include <dirent.h>  
int main()
{   
struct dirent *entry;
DIR *folder = opendir(".");  
if (folder == NULL) {
printf("Cannot open folder.\n");
return 1;  }
while ((entry = readdir(folder)) != NULL)
{   printf("%s\n", entry->d_name);   }    
closedir(folder);   
return 0; }
