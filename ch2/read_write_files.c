#include <stdio.h>
#include <stdlib.h>

#define READ_MODE "r"

int main(){
    char inputFile [100] = "input.txt";

    FILE* infile, *outfile;

    // initialize infile
    infile = fopen(inputFile, READ_MODE);
    if(infile == NULL){
        printf("Error open the file %s", inputFile);
        exit(EXIT_FAILURE);
    }

    int ch;
    while((ch = getc(infile)) != EOF){
        printf("%c", ch);
    }
    printf("\n");

    return 0;
}
