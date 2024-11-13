#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int hour, minute, second;
    char name[60];
    FILE *outputFile;
    outputFile = fopen("time.txt", "w");
    if (outputFile == NULL)
    {
        printf("Error : File could not be created.");
        exit(EXIT_FAILURE);
    }
    printf("Enter time in the format hour:minute:second followed by your name:\n");
    fscanf(stdin, "%d:%d:%d\n%s", &hour, &minute, &second, name);
    fprintf(outputFile, "%d:%d:%d %s", hour, minute, second, name);
    return EXIT_SUCCESS;
}
