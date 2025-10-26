#include <stdio.h>

int main() 
{
    int n, sum = 0, rem;

    printf("Enter number: ");
    scanf("%d", &n);
    
    for(; n > 0; n /= 10) 
    {
        rem = n % 10;
        sum += rem;
    }
    
    printf("Sum of digits = %d", sum);
    return 0;
}
