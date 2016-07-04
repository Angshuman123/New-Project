#include<stdio.h>
int main() {
	int pid=fork();
	if(pid==0) {
		printf("\n I'm a child process my pid is %d",getpid());
		printf("\n My parent process is %d",getppid());
	}
	else {
		printf("\n I'm a parent process my pid is %d",getpid());
		printf("\n My parent process is %d",getppid());
	}
	return 0;
}
