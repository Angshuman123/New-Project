#include<stdio.h>
int main() {
	int pid=fork();
	if(pid>0) {
		printf("\n Parent process will sleep \n");
		sleep(10);
	}
	else if(pid==0){
		printf("\n I'm a child process \n");
	}
	return 0;
}
