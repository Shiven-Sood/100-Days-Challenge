//Q145: Return a structure containing top student's details from a function.

/*
Sample Test Cases:
Input 1:
3 students: Riya 101 89, Karan 102 96, Meena 103 92
Output 1:
Top Student: Karan | Roll: 102 | Marks: 96

*/
#include <stdio.h>
struct Student {
    char name[50];
    int roll;
    int marks;
};
struct Student getTopStudent(struct Student arr[], int n) {
    int best = 0;
    for (int i = 1; i < n; ++i) {
        if (arr[i].marks > arr[best].marks) best = i;
    }
    return arr[best];
}

int main(void) {
    int x;
    printf("Enter No of Student data to be entered : ");
    scanf("%d",&x);
    struct Student s[x];
    for (int i = 0; i < x; ++i) {
        printf("Enter Student name , Roll No , Marks : ");
        if (scanf("%49s %d %d", s[i].name, &s[i].roll, &s[i].marks) != 3) return 0;
    }

    struct Student top = getTopStudent(s, x);
    printf("Top Student: %s | Roll: %d | Marks: %d\n", top.name, top.roll, top.marks);

    return 0;
}