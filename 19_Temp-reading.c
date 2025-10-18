#include <stdio.h>

int main() 
{
    int i;
    float temp;

    for(i = 1; i <= 5; i++) 
    {
        temp = 25 + i;  // Example values
    
        printf("Temperature reading %d = %.1f°C\n", i, temp);
    }
    return 0;
}
