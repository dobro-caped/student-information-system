// course.h
#ifndef COURSE_H
#define COURSE_H

#define MAX_CODE_LENGTH 10

typedef struct {
    char code[MAX_CODE_LENGTH];
    char name[MAX_NAME_LENGTH];
} Course;

void initializeCourse(Course *course, const char *code, const char *name);
void displayCourse(const Course *course);

#endif // COURSE_H
