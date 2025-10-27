#include <stdio.h>

int main() 
{
    int i;

    for(i = 0; i < 8; i++) 
    {
        printf("%d in binary = %d%d%d\n", i, (i/4)%2, (i/2)%2, i%2);
    }
    return 0;
}
