#include <stdio.h>

int main() 
{
    int i;

    for(i = 1; i <= 5; i++) 
    {
        printf("Resistor %d = %d Ohms\n", i, i * 100);
    }
    return 0;
}
