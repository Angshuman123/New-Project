#include<stdio.h>
#include<signal.h>
#include<unistd.h>
void ouch(int sig) {
	printf("ouch! I got signal %d \n",sig);
} 

int main() {
	(void) signal(SIGINT,ouch);
	while(1) {
		printf("Hello world! \n");
		sleep(1);
	}
}
