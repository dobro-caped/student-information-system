// grade.h
#ifndef GRADE_H
#define GRADE_H

typedef struct {
    int studentId;
    char courseCode[MAX_CODE_LENGTH];
    float value;
} Grade;

void initializeGrade(Grade *grade, int studentId, const char *courseCode, float value);
void displayGrade(const Grade *grade);

#endif // GRADE_H
