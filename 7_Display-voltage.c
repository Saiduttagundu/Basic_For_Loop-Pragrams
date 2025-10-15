#include <stdio.h>

int main() 
{
    float v;

    for(v = 0; v <= 5; v += 0.5) 
    {
        printf("Voltage = %.1fV\n", v);
    }
    
    return 0;
}
