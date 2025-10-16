#include <stdio.h>

int main() 
{
    float V = 10, R, I;

    for(R = 1; R <= 5; R++) 
    {
        I = V / R;
        printf("When R = %.1f Ohm, Current I = %.2f A\n", R, I);
    }
    
    return 0;
}
