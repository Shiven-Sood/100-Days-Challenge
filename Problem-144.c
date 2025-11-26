//Q144: Write a function that accepts a structure as parameter and prints its members.

/*
Sample Test Cases:
Input 1:
Student: Neha 104 92
Output 1:
Name: Neha | Roll: 104 | Marks: 92
*/

#include <stdio.h>
#include <string.h>
struct Student {
    char name[20];
    int roll_no;
    int marks;
};
void print_student(struct Student student) {
    printf("Name: %s | Roll: %d | Marks: %d\n", student.name, student.roll_no, student.marks);
}
int main() {
    struct Student student;
    printf("Enter name, roll number and marks of the student: ");
    scanf("%s %d %d", student.name, &student.roll_no, &student.marks);
    print_student(student);
    return 0;
}