#include <stdio.h>

int main() 
{
    int i;

    for(i = 1; i <= 6; i++) 
    {
        if(i % 2 == 0)
            {
                printf("Pin %d = HIGH\n", i);
            }
        else
            {
                printf("Pin %d = LOW\n", i);
            }
    }
    return 0;
}
