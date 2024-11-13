#include <stdio.h>
#include <string.h>

int main(){
    char name [20];
    printf("Enter your name : \n");
    scanf("%s", name);
    printf("Your name is : %s\n", name);
    printf("The length of your name is : %d\n", strlen(name));
}