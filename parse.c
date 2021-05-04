#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int checkFile(char *fileName) {
        FILE *file;
        if (file = fopen(fileName, "r")) {
                fclose(file);
                return 1;
        }

        return 0;
}


int main(int argc, char *argv[]) {
  
  char *choice;
  char *inputFile;
  char *outputFile;
   if (argc > 3 && checkFile(".kilit")) {
    if(!strcmp(argv[1], "-e")) {
	//TODO
	    
    }
    else if(!strcmp(argv[1], "-d")){
    	//TODO
    }
    else {
    	printf("only -e or -d options are available");
	exit(1);
    }
	

    if (!checkFile(argv[2])) {
	 printf("Your input file does not exist in current directory");
	 exit(1);
    } 
    inputFile = argv[2];
    outputFile = argv[3];

   
   ;
   }

   else {
   	printf("Please enter the arguments correctly and check .kilit file is exist!");
	exit(1);
   }

  return 0;
}


