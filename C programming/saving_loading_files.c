#include<stdio.h>

#define MAXSTRLEN 200
#define FILENAME "test.txt"

void readlines() {
    FILE *fp = fopen(FILENAME,"r");       // 'r' stands for read mode. let's you open the file in read mode
    char line[MAXSTRLEN];
    if(fp != 0) {
      while(fgets(line,sizeof(line),fp) != 0) {
        fputs(line,stdout);
      }
      fclose(fp);
    } else {
      printf("File %s cannot be opened!",FILENAME);
    }
}

void writelines() {
  FILE *fp;
  fp = fopen(FILENAME,"w");           // 'w' stands for write mode. let's you open the file in write mode
  fputs("Hello World. \n ",fp);
  fputs("GoodBye World. \n",fp);
  fclose(fp);
}

void clearfile() {
  FILE *fp;
  fp = fopen(FILENAME,"w");
  fclose(fp);
}

void deletefile() {
  if(remove(FILENAME) == 0) {
    printf("%s file deleted. \n",FILENAME);
  } else {
    printf("Unable to delete the file: %s \n",FILENAME);
  }
}

int main(int argc, char const *argv[]) {
  /*
  *uncomment these functions and see the result
  */

  //deletefile();
  //clearfile();
  //writelines();
  //readlines();
  return 0;
}
