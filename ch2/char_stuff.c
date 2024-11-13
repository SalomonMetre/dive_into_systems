#include <stdio.h>

int main(){
    char name [8] = "Salomon";
    name[7] = '\0';
    char* s_char = name;
    printf("Second character : %c\n", *(s_char + 1));
}