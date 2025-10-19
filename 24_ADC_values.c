#include <stdio.h>

int main() 
{
    int adc;

    for(adc = 0; adc <= 1023; adc += 256) 
    {
        printf("ADC Value = %d\n", adc);
    }
    return 0;
}
