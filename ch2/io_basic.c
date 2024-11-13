#include <stdio.h>

int sum(int num1, int num2);

int main(){
    char str [100];
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    sprintf(str, "The sum of %d and %d is : %d\n", num1, num2, sum(num1, num2));
    printf(str);
}

int sum(int num1, int num2){
    return num1 + num2;
}