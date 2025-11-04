#include <stdio.h>
int main() 
{
    int duty;
    for(duty = 10; duty <= 100; duty += 10) 
    {
        printf("Duty Cycle = %d%%\n", duty);
    }
    return 0;
}
