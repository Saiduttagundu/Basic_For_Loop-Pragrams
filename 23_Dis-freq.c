#include <stdio.h>

int main() 
{
    int f;

    for(f = 100; f <= 1000; f += 100) 
    {
        printf("Frequency = %d Hz\n", f);
    }
    return 0;
}
