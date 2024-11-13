#include <stdio.h>
#include "kms_maths.h"

int main(){
    double num1, num2;
    printf("Enter your two numbers separated by a space : \n");
    scanf("%lf %lf", &num1, &num2);
    printf("The sum of %.2lf and %.2lf is %.2lf\n", num1, num2, kms_add(num1, num2));
}