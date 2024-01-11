// main.c
#include <stdio.h>
#include "student.h"
#include "course.h"
#include "grade.h"

int main() {
    Student student1, student2;
    initializeStudent(&student1, 1, "John Doe");
    initializeStudent(&student2, 2, "Jane Doe");

    Course course1, course2;
    initializeCourse(&course1, "CSC101", "Introduction to Programming");
    initializeCourse(&course2, "MAT201", "Linear Algebra");

    Grade grade1, grade2;
    initializeGrade(&grade1, student1.id, course1.code, 85.5);
    initializeGrade(&grade2, student2.id, course2.code, 92.0);

    // Display information
    printf("Student Information:\n");
    displayStudent(&student1);
    displayStudent(&student2);

    printf("\nCourse Information:\n");
    displayCourse(&course1);
    displayCourse(&course2);

    printf("\nGrades Information:\n");
    displayGrade(&grade1);
    displayGrade(&grade2);

    return 0;
}
