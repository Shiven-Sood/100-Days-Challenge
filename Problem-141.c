// Q141: Define a structure Student with name, roll_no, and marks, then read and print one student's data.

/*
Sample Test Cases:
Input 1:
Name: Asha
Roll: 101
Marks: 90
Output 1:
Name: Asha | Roll: 101 | Marks: 90

*/
#include <stdio.h>
struct Student {
    char name[20];
    int roll_no;
    int marks;
};
int main() {
    struct Student Student;
    printf("Enter name: ");
    scanf("%s", Student.name);
    printf("Enter roll number: ");
    scanf("%d", &Student.roll_no);
    printf("Enter marks: ");
    scanf("%d", &Student.marks);
    printf("Name: %s | Roll: %d | Marks: %d\n", Student.name, Student.roll_no, Student.marks);
    return 0;
}