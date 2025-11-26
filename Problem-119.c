// Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

/*
Sample Test Cases:
Input 1:
nums1 = [1,3,3,4]
Output 1:
3

Input 2:
nums1 = [1,2,2]
Output 2:
2

Input 3:
nums1 = [0,4,1,1,5]
Output 3:
1

*/
#include <stdio.h>
#include <stdlib.h>
int findDuplicate(int* nums, int numsSize) {
    for(int i = 0; i < numsSize; i++) {
        int index = abs(nums[i]);
        if(nums[index] < 0) {
            return index;
        }
        nums[index] = -nums[index];
    }
    return -1;
}
int main() {
    int nums1[] = {1, 3, 3, 4};
    int size1 = sizeof(nums1) / sizeof(nums1[0]);
    printf("%d\n", findDuplicate(nums1, size1));

    int nums2[] = {1, 2, 2};
    int size2 = sizeof(nums2) / sizeof(nums2[0]);
    printf("%d\n", findDuplicate(nums2, size2));

    int nums3[] = {0, 4, 1, 1, 5};
    int size3 = sizeof(nums3) / sizeof(nums3[0]);
    printf("%d\n", findDuplicate(nums3, size3));

    return 0;
}