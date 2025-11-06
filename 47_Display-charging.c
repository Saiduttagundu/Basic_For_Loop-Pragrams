#include <stdio.h>
int main() 
{
    int percent;

    printf("Battery Charging Simulation:\n");
    
    for(percent = 0; percent <= 100; percent += 10) 
    {
        printf("Battery: %d%% charged\n", percent);
    }
    return 0;
}
