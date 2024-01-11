// course.c
#include <stdio.h>
#include <string.h>
#include "course.h"

void initializeCourse(Course *course, const char *code, const char *name) {
    strncpy(course->code, code, MAX_CODE_LENGTH - 1);
    course->code[MAX_CODE_LENGTH - 1] = '\0'; // Ensure null-termination
    strncpy(course->name, name, MAX_NAME_LENGTH - 1);
    course->name[MAX_NAME_LENGTH - 1] = '\0'; // Ensure null-termination
}

void displayCourse(const Course *course) {
    printf("Course Code: %s, Name: %s\n", course->code, course->name);
}
