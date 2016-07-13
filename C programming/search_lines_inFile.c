#include <stdio.h>
#include <string.h>

#define FILENAME "sonnet.txt"
#define MAXSTRLEN 200

/*
* returns index (0 based) of first character of searchstring in-sourcestring
* or -1 is searchstring is not found
*/

static int searchstring(char searchstr[],char sourcestr[]) {
  char *ptrtostr;
  int foundat = -1;
  ptrtostr = strstr(sourcestr,searchstr);
  if(ptrtostr != 0) {
    foundat = (int) ((ptrtostr - sourcestr));
  }
  return foundat;
}

void findstrings(char *filename,char *ss) {
  FILE *f;
  int count;
  char line[MAXSTRLEN];

  f = fopen(filename,"r");
  if(f == 0) {
    printf("Cannot open the file: %s\n",filename);
  } else {
    count = 0;
    while(fgets(line,MAXSTRLEN,f) != 0) {
      if(searchstring(ss,line) >= 0) {
        count++;
      }
    }
    printf("'%s' was found in %d lines of the file %s\n",ss,count,filename);
    fclose(f);
  }
}

int main(int argc, char const *argv[]) {
  findstrings(FILENAME,"Hello");
  findstrings(FILENAME,"This");
  findstrings(FILENAME,"Orange is the new black");
  return 0;
}
