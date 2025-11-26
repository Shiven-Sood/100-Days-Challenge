//Q147: Store employee data in a binary file using fwrite() and read using fread().

/*
Sample Test Cases:
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.

*/

#include <stdio.h>
struct Employee {
    int id;
    char name[50];
    float salary;
};
int main() {
    struct Employee emp, empRead;
    FILE *fp;
    fp = fopen("employee.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }
    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);
    printf("Enter Employee Name: ");
    scanf(" %[^\n]", emp.name);
    printf("Enter Employee Salary: ");
    scanf("%f", &emp.salary);
    
    fwrite(&emp, sizeof(emp), 1, fp);
    fclose(fp);
    printf("\nEmployee details entered and stored in file.\n");
    fp = fopen("employee.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }
    fread(&empRead, sizeof(empRead), 1, fp);
    fclose(fp);
    printf("\n--- Employee Details Read From File ---\n");
    printf("ID     : %d\n", empRead.id);
    printf("Name   : %s\n", empRead.name);
    printf("Salary : %.2f\n", empRead.salary);

    return 0;
}