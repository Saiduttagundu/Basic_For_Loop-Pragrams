#include <stdio.h>
int main() 
{
    int i, j;
    for(j = 1; j <= 2; j++) {  // repeat 2 times
        for(i = 1; i <= 3; i++) {
            printf("Cycle %d: LED %d ON\n", j, i);
        }
        for(i = 3; i >= 1; i--) {
            printf("Cycle %d: LED %d OFF\n", j, i);
        }
        printf("\n");
    }
    return 0;
}
