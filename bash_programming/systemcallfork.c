#include<stdio.h>
int main() {
	int pid=fork();
	if(pid>0)
		printf(" \n Parent process \n");
	else if(pid==0)
		printf("\n Child process \n ");
	else {
		printf("\n Fork failed to create process \n");
		return -1;
	}
	return 0;
}
