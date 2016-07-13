void add_cd(char *filename) {
  FILE  *f;

  readcd_data();
  f = fopen(filename,"ab");         //open file in append mode
  if(f == 0) {
    printf("Cannot write to file: %s \n",filename);
  } else {
    fwrite(&tempcd,sizeof(CD),1,f);         //write data saved in tempcd at end
    fclose(f);
  }
}

//save in memory data (cd_collection) to file on disk
void save_cdcollection(char *filename) {
  /*
  *note cdarraylen was initialized when the data was last loaded from disk
  *it saves the number of records loaded in the memory
  *EXERCISE: Test if the file already exists on the disk and prompt user
  *to ask whether it should be overwritten
  */

  FILE *f;
  int count;

  f = fopen(filename,"ab");
  if(f == 0) {
    printf("Cannot write to file: %s \n",filename);         //open file
  } else {
    count = fwrite(cd_collection,sizeof(CD),cdarraylen,f);       // write it to the file
    if(count != cdarraylen) {
      printf("Initialization failed.\n");
    } else {
      printf("Saved\n");
    }
    fclose(f);
  }
}


//laod cd db into cd_collection array in memory
static int load_cdcollection(char *filename) {
  FILE *f;
  int numrecs;
  int numrecsread = 0;

  numrecs = number_of_records_in_db(filename);
  f = fopen(filename,"rb");
  if(f == 0) {
    printf("Cannot read file: %s\n",filename);
  } else {
    cd_collection = realloc(cd_collection,sizeof(CD) * numrecs);
    numrecsread = fread(cd_collection,sizeof(CD),numrecs,f);
    if(numrecsread != numrecs) {
      printf("Error: %d records in file but %d were read into memory",numrecs,numrecsread);
    }
    fclose(f);
  }
  cdarraylen = numrecsread;
  return numrecsread;
}
