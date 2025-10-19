#include <stdio.h>

int main() 
{
    float V, I, P;

    for(V = 1; V <= 5; V++) 
    {
        I = V / 2;
    
        P = V * I;
    
        printf("Voltage = %.1fV, Current = %.1fA, Power = %.2fW\n", V, I, P);
    }
    return 0;
}
