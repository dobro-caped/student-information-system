// student.c
#include <stdio.h>
#include <string.h>
#include "student.h"

void initializeStudent(Student *student, int id, const char *name) {
    student->id = id;
    strncpy(student->name, name, MAX_NAME_LENGTH - 1);
    student->name[MAX_NAME_LENGTH - 1] = '\0'; // Ensure null-termination
}

void displayStudent(const Student *student) {
    printf("Student ID: %d, Name: %s\n", student->id, student->name);
}
