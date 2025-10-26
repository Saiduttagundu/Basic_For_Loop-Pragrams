#include <stdio.h>

int main() 
{
    int f;
    float T;

    for(f = 100; f <= 1000; f += 100) 
    {
        T = 1.0 / f;
    
        printf("f=%dHz → T=%.6fs\n", f, T);
    }
    return 0;
}
