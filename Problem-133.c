//Q133: Create an enum for months and print how many days each month has.

/*
Sample Test Cases:
Input 1:
FEB
Output 1:
28 or 29 days

*/
#include <stdio.h>
enum Months {
    JAN,
    FEB,
    MAR,
    APR,
    MAY,
    JUN,
    JUL,
    AUG,
    SEP,
    OCT,
    NOV,
    DEC
};
int main() {
    enum Months month;
    for(month = JAN; month <= DEC; month++) {
        switch(month) {
            case JAN: printf("JAN: 31 days\n"); break;
            case FEB: printf("FEB: 28 or 29 days\n"); break;
            case MAR: printf("MAR: 31 days\n"); break;
            case APR: printf("APR: 30 days\n"); break;
            case MAY: printf("MAY: 31 days\n"); break;
            case JUN: printf("JUN: 30 days\n"); break;
            case JUL: printf("JUL: 31 days\n"); break;
            case AUG: printf("AUG: 31 days\n"); break;
            case SEP: printf("SEP: 30 days\n"); break;
            case OCT: printf("OCT: 31 days\n"); break;
            case NOV: printf("NOV: 30 days\n"); break;
            case DEC: printf("DEC: 31 days\n"); break;
        }
    }
    return 0;
}