//  Find the second largest element in an array.
#include <stdio.h>
#include <limits.h>

int main() {
    int n, i;
    int first, second;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    first = second = INT_MIN;

    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        int num;
        scanf("%d", &num);

        if (num > first) {
            second = first;
            first = num;} 
        else if (num > second && num < first) {
            second = num;
        }
    }

    if (second != INT_MIN) {
        printf("The second largest element is: %d\n", second);
    } else {
        printf("No second largest element found\n");
    }

    return 0;
}
