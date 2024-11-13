#include <stdlib.h>

int main(){
    float averages [20];
    char name [20];
    int i;

    // access array elements
    for(i = 0; i < 10; i++){
        averages[i] = 0.0 + i;
        name[i] = 'a' + i;
    }
    name[10] = '\0';

    // print 3 d abcdefghij
    printf("%g %c %s\n", averages[3], name[3], name);
}