// grade.c
#include <stdio.h>
#include <string.h>
#include "grade.h"

void initializeGrade(Grade *grade, int studentId, const char *courseCode, float value) {
    grade->studentId = studentId;
    strncpy(grade->courseCode, courseCode, MAX_CODE_LENGTH - 1);
    grade->courseCode[MAX_CODE_LENGTH - 1] = '\0'; // Ensure null-termination
    grade->value = value;
}

void displayGrade(const Grade *grade) {
    printf("Student ID: %d, Course Code: %s, Grade: %.2f\n", grade->studentId, grade->courseCode, grade->value);
}
