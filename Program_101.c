// Q101: Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.

/*
Sample Test Cases:
Input 1:
nums = [5,7,7,8,8,10], target = 8
Output 1:
3,4

*/
#include <stdio.h>
void findOccurrence(int nums[], int size, int target, int *first, int *last) {
    *first = -1;
    *last = -1;
    for (int i = 0; i < size; i++)
      {
        if (nums[i] == target) 
        {
            *first = i;
            break;
        }
    }

    for (int i = size - 1; i >= 0; i--) {
        if (nums[i] == target) {
            *last = i;
            break;
        }
    }
}
int main() {
    int nums[] = {5, 7, 7, 8, 8, 10};
    int target = 8;
    int size = sizeof(nums) / sizeof(nums[0]);
    int first, last;
    findOccurrence(nums, size, target, &first, &last);
    printf("%d,%d\n", first, last);
    return 0;
}
