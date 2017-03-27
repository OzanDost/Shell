#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int execvp(const char *filename, char *const argv[]);
pid_t fork(void);
pid_t wait(int *wstatus);
pid_t getpid(void);
pid_t waitpid(pid_t pid, int *status, int options);
void _exit(int status);
char *gets(char *str);


int main(int argc, char* argv[])
{

	char input[50];
	char command[50];
	char *inputptr;
	int i;

	inputptr=input;

	printf(">>");
	gets(inputptr);
	const char s[2]=";";
	char *token;

	token = strtok(str, s);

	while(strcmp(inputptr, "quit")!=0){


		 
		 sprintf(command,"\"%s\"", input);
		 system(input);

		 pid_t parent = getpid();
		 pid_t pid = fork();

		 if (pid==-1)
		 {
		 	perror("failed to fork");
		 }
		 else if (pid>0)
		 {
		 	printf("%d\n",parent );
		 	
		 	int status;

		 	waitpid(pid, &status, 0);


		 	
		 }
		 else
		 {
		 	printf("or did it ?");
		 	

		 	printf("%d\n",pid );

		 	_exit(EXIT_FAILURE);
		 }


		 printf(">>");
		 gets(inputptr);
		 
	}
	
	return 0;
}