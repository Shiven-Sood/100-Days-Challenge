// Q103: Write a Program to take an array of integers as input, calculate the pivot index of this array. The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right. If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array. Print the leftmost pivot index. If no such index exists, print -1.

/*
Sample Test Cases:
Input 1:
nums = [1,7,3,6,5,6]
Output 1:
3

*/
#include <stdio.h>
int find(int arr[], int size) 
{
    for (int i = 0; i < size; i++)
    {
        int left = 0;
        int right = 0;
        for (int j = 0; j < i; j++) 
        {
            left += arr[j];
        }
        for (int j = i + 1; j < size; j++) 
            {
            right += arr[j];
        }

        if (left == right) 
        {
            return i;
        }
    }
    return -1;
}
int main() {
    int arr[] = {1, 7, 3, 6, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int pivotIndex = find(arr, size);
    printf("%d\n", pivotIndex);
    return 0;
}
