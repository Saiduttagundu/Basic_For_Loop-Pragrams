#include <stdio.h>

int main() 
{
    int n, rev = 0, rem;

    printf("Enter number: ");
    scanf("%d", &n);

    for(; n > 0; n /= 10) 
    {
        rem = n % 10;
        rev = rev * 10 + rem;
    }
    
    printf("Reversed number = %d", rev);
    return 0;
}
