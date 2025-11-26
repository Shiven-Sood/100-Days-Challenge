// Q143: Find and print the student with the highest marks.

/*
Sample Test Cases:
Input 1:
3 students: Ravi 101 95, Sita 102 85, Aman 103 88
Output 1:
Topper: Ravi (Marks: 95)

*/
#include <stdio.h>
#include <string.h>
#define MAX_NAME_LENGTH 50
#define MAX_STUDENTS 100
struct Student {
    char name[MAX_NAME_LENGTH];
    int roll_no;
    int marks;
};
void find_topper(struct Student students[], int n) {
    int max_marks = -1;
    struct Student *topper = NULL;
    for (int i = 0; i < n; i++) {
        if (students[i].marks > max_marks) {
            max_marks = students[i].marks;
            topper = &students[i];
        }
    }
    if (topper != NULL) {
        printf("Topper: %s (Marks: %d)\n", topper->name, topper->marks);
    }
}
int main() {
    int n;
    struct Student students[MAX_STUDENTS];
    printf("Enter number of students: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Enter name, roll number and marks of student %d: ", i + 1);
        scanf("%s %d %d", students[i].name, &students[i].roll_no, &students[i].marks);
    }
    find_topper(students, n);
    return 0;
}
