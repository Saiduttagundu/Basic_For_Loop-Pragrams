#include <stdio.h>

int main() 
{
    int rpm;

    for(rpm = 1000; rpm <= 5000; rpm += 1000) 
    {
        printf("Motor Speed = %d RPM\n", rpm);
    }
    return 0;
}
