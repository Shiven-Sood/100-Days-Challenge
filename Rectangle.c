// Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include<stdio.h>
int main()
{
    int l,b,area,perimeter;
    printf("Enter the length :");
    scanf("%d",&l);
    printf("Enter the breadth :");
    scanf("%d",&b);
    
    area = l*b;
    perimeter = 2*(l+b);
    printf("Area of the rectangle = %.2d\n", area );
    printf("Perimeter of the rectangle = %.2d\n",perimeter);
    return 0;
}
