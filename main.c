#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>  // for write(), close()
#include <string.h>

void help(void)
{
	printf("this is the help menu\n");


}

int main(int argc, char *argv[])
{	

	if(argc == 1){
		help();	
		return 0;
	}	
	else{
		printf("hi %s\n",argv[1]);
		if (strcmp(argv[0], "create") == 0)
		{	
			printf("hi there\n");
			if (strcmp(argv[1], "task") ==0){
				int fd;
				fd = open("list.txt", O_WRONLY | O_CREAT,0644);	
                                printf("hi there\n");			
}
		}	

	}
	return 0;

}
