/ Q102: Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.

/*
Sample Test Cases:
Input 1:
arr = [1, 2, 8, 10, 11, 12, 19], x = 5
Output 1:
2
*/
#include <stdio.h>
int find(int arr[], int size, int x) {
    for (int i = 0; i < size; i++) {
        if (arr[i] >= x) {
            return i;
        }
    }
    return -1;
}
int main() {
    int arr[] = {1, 2, 8, 10, 11, 12, 19};
    int x = 5;
    int size = sizeof(arr) / sizeof(arr[0]);

    int ceilIndex = find(arr, size, x);

    printf("%d\n", ceilIndex);
    return 0;
}
