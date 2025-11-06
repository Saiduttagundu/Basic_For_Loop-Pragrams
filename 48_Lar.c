#include <stdio.h>
int main() 
{
    int i, num, largest;
    printf("Enter 5 numbers:\n");
    for(i = 1; i <= 5; i++) 
    {
        scanf("%d", &num);
        if(i == 1 || num > largest)
            largest = num;
    }
    printf("Largest number = %d", largest);
    return 0;
}
