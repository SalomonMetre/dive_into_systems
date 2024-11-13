#include <stdlib.h>

int main(){
    int *p_array;
    double *d_array;

    // call malloc to allocate the appropriate number of bytes for the array
    p_array = malloc(sizeof(int) * 50);
    d_array = malloc(sizeof(double) * 100);

    // always check the return value of functions and handle error return values
    if(p_array == NULL || d_array == NULL){
        printf("ERROR : malloc failed !\n");
        exit(1);
    }
    // use [] notation to access elements
    for(int i = 0; i < 50; i++){
        p_array[i] = 0;
        d_array[i] = 0.0;
    }

    // free heap space when done using it
    free(p_array);
    p_array = NULL;

    free(d_array);
    d_array = NULL;
}