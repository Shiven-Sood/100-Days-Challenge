// Write a program to print the product of even numbers from 1 to n.
int main() 
{
    int n, i;
    long long product = 1;   
    int found = 0;            
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Even numbers from 1 to %d are: ", n);
    for (i = 2; i <= n; i += 2) 
    {
        printf("%d ", i);
        product *= i;
        found = 1;
    }

    if (found)
        printf("\nProduct of even numbers from 1 to %d = %lld\n", n, product);
    else
        printf("\nNo even numbers in the given range!\n");
    return 0;
}
