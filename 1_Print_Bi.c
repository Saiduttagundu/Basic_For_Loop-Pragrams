#include<stdio.h>

void main()
{
    int dutycycle = 5;
    int period = 10;

    for (int i=0; i<period; i++)
    {
        if(i>=dutycycle)
        {
            printf("1\n");
        }
        else
        {
            printf("0\n");
        }
    }
}