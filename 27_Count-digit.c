#include <stdio.h>

int main() 
{
    int n, count = 0;

    printf("Enter number: ");
    scanf("%d", &n);

    for(; n > 0; n /= 10) 
    {
        count++;
    }
    
    printf("Number of digits = %d", count);
    
    return 0;
}
