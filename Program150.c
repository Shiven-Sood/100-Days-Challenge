/*Use pointer to struct to modify and display data using -> operator.*/
#include <stdio.h>
struct Student 
{
    char name[50];
    int roll;
    int marks;
};
int main() 
{
    struct Student s;
    struct Student *ptr;
    ptr = &s;
    scanf("%s %d %d", ptr->name, &ptr->roll, &ptr->marks);
    printf("Modified Data: Name: %s | Roll: %d | Marks: %d",
    ptr->name, ptr->roll, ptr->marks);
    return 0;
}
