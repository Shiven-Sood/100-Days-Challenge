// Q142: Store details of 5 students in an array of structures and print all.

/*
Sample Test Cases:
Input 1:
Details of 5 students (Name, Roll, Marks)
Output 1:
Tabular list of all 5 students with their details

*/
#include <stdio.h>
#define MAX_STUDENTS 5
#define NAME_LENGTH 50
struct Student {
    char name[NAME_LENGTH];
    int roll;
    float marks;
};
int main() {
    struct Student students[MAX_STUDENTS];
    for (int i = 0; i < MAX_STUDENTS; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll: ");
        scanf("%d", &students[i].roll);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }
    printf("\nDetails of Students:\n");
    printf("-------------------------------------------------\n");
    printf("| %-20s | %-10s | %-10s |\n", "Name", "Roll", "Marks");
    printf("-------------------------------------------------\n");
    for (int i = 0; i < MAX_STUDENTS; i++) {
        printf("| %-20s | %-10d | %-10.2f |\n", students[i].name, students[i].roll, students[i].marks);
    }
    printf("-------------------------------------------------\n");

    return 0;
}