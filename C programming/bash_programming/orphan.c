#include<stdio.h>
int main() {

	printf("Before fork \n");
	int pid=fork();
	if(pid==0) {
		printf("\nChild process has started,pid id %d",getpid());
		printf("\nParent of this child,process id %d",getppid());
		sleep(10);
	} else {
		printf("\nParent process has been created,process id %d",getpid());
		printf("\nParent process of parent process,process id %d",getppid());
	}
	printf("\nAfter fork");
	return 0;
}
