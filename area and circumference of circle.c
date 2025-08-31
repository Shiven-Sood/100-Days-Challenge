#include<stdio.h>
#include<math.h>
int main()
{ 
    float radius,area,circum;
    printf("Enter the radius of the circle :");
    scanf("%f",&radius);
    area = 3.14*pow(radius,2);
    circum = 2*3.14*radius;
    printf("Area of a  circle = %f\n",area);
    printf("Circumference of a circle = %f\n",circum);
    return 0;
}
