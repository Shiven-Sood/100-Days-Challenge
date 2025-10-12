//Count even and odd numbers in an array.
#include <stdio.h>
int main()
{
    int n, i, even = 0, c = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++) 
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0)
        {
            even++;
        } else 
        {
           c++;
        }
    }
    printf("Even=%d, Odd=%d\n", even, odd);
    return 0;
}
