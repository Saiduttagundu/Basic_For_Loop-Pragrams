#include <stdio.h>
int main() 
{
    int start, end, i;
    printf("Enter start and end: ");
    scanf("%d%d", &start, &end);
    
    for(i = start; i <= end; i++) 
    {
        printf("%d ", i);
    }
    return 0;
}
