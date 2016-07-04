#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[]) {
	
	char *filename;
	if(argc!=2) {
		fprintf(stderr,"usage:use uppercase file");
		exit(1);
	}
	filename=argv[1];
	if(!freopen(filename,"r",stdin)) {
		fprintf(stderr,"could not redirect stdin from file %s \n",filename);
		exit(2);
	}
	excel("%upper","upper",0);
	perror("Could not exec %upper");
	exit(3);
}
