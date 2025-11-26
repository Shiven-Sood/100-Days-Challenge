// Q112: Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.

/*
Sample Test Cases:
Input 1:
arr[] = [2, 3, -8, 7, -1, 2, 3]
Output 1:
11

Input 2:
arr[] = [-2, -4]
Output 2:
-2

Input 3:
arr[] = [5, 4, 1, 7, 8]
Output 3:
25

*/
#include <stdio.h>
#include <limits.h>
int max(int arr[], int n) {
    int A = INT_MIN;
    int B = 0;

    for (int i = 0; i < n; i++) {
        B += arr[i];
        if (A < B) {
            A = B;
        }
        if (B < 0) {
            B = 0;
        }
    }
    return A;
}
int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int max_sum = max(arr, n);
    printf("The maximum sum of contiguous subarray is: %d\n", max_sum);
    return 0;
}
