#include <stdio.h>
#include <math.h>
int main() 
{
    float a, b, c, discriminant, root1, root2, realPart, imagPart;
    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);
    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) 
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and distinct: %.2f and %.2f\n", root1, root2);
    } 
    else if (discriminant == 0) 
    {
        // Real and equal roots
        root1 = -b / (2 * a);
        printf("Roots are real and equal: %.2f and %.2f\n", root1, root1);
    } 
    else 
    {
        // Imaginary roots
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are imaginary and complex: %.2f + %.2fi and %.2f - %.2fi\n", 
               realPart, imagPart, realPart, imagPart);
    }
    return 0;
}
