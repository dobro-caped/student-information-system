// student.h
#ifndef STUDENT_H
#define STUDENT_H

#define MAX_NAME_LENGTH 50

typedef struct {
    int id;
    char name[MAX_NAME_LENGTH];
} Student;

void initializeStudent(Student *student, int id, const char *name);
void displayStudent(const Student *student);

#endif // STUDENT_H
