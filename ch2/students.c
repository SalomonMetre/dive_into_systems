#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define nbClasses 6
#define nbStudents 3

typedef struct{
    int id;
    char course [64];
    char name [64];
} Student;

void setStudentDetails(Student* school, int row, int col, int id, char* course, char* name){
    Student* student = school + row * nbClasses + col;
    student->id = id;
    strcpy(student->course, course);
    strcpy(student->name,name);
}

Student* getStudent(Student* school, int row, int col){
    return school + row * nbClasses + col;
}

int main(){
    Student* school;
    school = malloc(sizeof(Student) * nbClasses * nbStudents );
    setStudentDetails(school, 0, 1, 13, "BICS", "Salomon");
    if(school == NULL){
        printf("Error allocating space for the school !\n");
        exit(1);
    }
    Student* student = getStudent(school, 0, 1);
    if(student == NULL){
        printf("Failed to get the student ! \n");
        exit(1);
    }
    printf("Student name : %s\nStudent id : %d\nStudent course : %s\n", student->name, student->id, student->course);
    printf("\nThe school is stored at address : %x\n", school);
    free(school);
    school = NULL;
    return 0;
}