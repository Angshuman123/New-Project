#include<pthread.h>
#include<stdio.h>
#define NUM_THREADS 10
void *printhello(void *threadid) {
	int tid;
	tid=(int) threadid;
	printf("Hello wotld! Its me thread #%d",tid);
	pthread_exit(NULL);
}

int main(int args,char *argv[]) {

	pthread_t threads[NUM_THREADS];
	int rc,t;
	for(t=0;t<NUM_THREADS;t++) {

		printf("In main:creating thread %d",t);
		rc=pthread_create(&threads[t],NULL,printhello,(void *)t);
		if(rc) {

			printf("Error,return code from pthread_create() is %d \n",rc);
			exit(1);
		}
	}
	pthread_exit(NULL);
}
