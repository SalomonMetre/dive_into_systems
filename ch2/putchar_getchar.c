#include <stdio.h>

int main(){
    char input;
    while((input = getchar()) != EOF){
        putchar(input);
    }
    printf("Standard input received EOF character!\n");
}