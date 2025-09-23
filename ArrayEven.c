// Count even and odd numbers in an array.
#include<stdio.h>
int main()
{
    int n,i,c=0,d=0;
    printf("Enter the value of n :");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements :");
    for(i=0;i<n;i++)
     scanf("%d",&arr[i]);
    printf("Even and Odd elements segregation \n");
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            c++;
        }
        else 
        {
            d++;
        }
    }
    printf("\n The even elements in the array are : %d",c);
    printf("\n The odd elements in the array are : %d",d);
     return 0;
}
