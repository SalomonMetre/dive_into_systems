#include <stdio.h>

typedef struct{
    int id;
    int age;
    char name [60];
} student;

int main(){
    student stud1 = {1, 20, "Salomon"};
    printf("Id is %d, age is %d, and name is %s\n", stud1.id, stud1.age, stud1.name);
    printf("Size of stud1 is %d\n", sizeof(stud1));
    return 0;
}