// /Q99: Change the date format from dd/mm/yyyy to dd-Apr-yyyy.

/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
    char date[11];
    printf("Enter date in dd/mm/yyyy format: ");
    scanf("%s", date);

    char day[3], month[3], year[5];

    strncpy(day, date, 2);
    day[2] = '\0';
    
    strncpy(month, date + 3, 2);
    month[2] = '\0';
    
    strncpy(year, date + 6, 4);
    year[4] = '\0';

    const char *months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                            "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    int monthIndex = atoi(month) - 1;

    printf("%s-%s-%s\n", day, months[monthIndex], year);

    return 0;
}
