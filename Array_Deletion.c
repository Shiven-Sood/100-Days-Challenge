//  Delete an element from an array.
#include <stdio.h>
int main()
{
    int n, i, pos;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter position to delete: ");
    scanf("%d", &pos);
    
    if (pos < 0 || pos >= n) 
    {
        printf("Invalid position\n");
        return 1;
    }

    for (i = pos-1; i < n - 1; i++) 
    {
        arr[i] = arr[i + 1];
    }
    
    printf("Array after deletion: ");
    for (i = 0; i < n - 1; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
