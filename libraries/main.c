#include <stdio.h>
#include "mylib.h"

int main(){
    float num1, num2;
    printf("Enter two float numbers separated by a space : \n");
    scanf("%g %g", &num1, &num2);
    printf("The biggest number between %g and %g is : %g\n", num1, num2, bigger(num1, num2));
    return 0;
}