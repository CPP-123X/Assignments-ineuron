

#include <stdio.h>

void main()
{
    printf("The first 10 Odd Natural Numbers are:-->> \n");
    int count=1;
    for (int i = 1; i <= 19; i = i + 2)
    {
        printf("Odd Number %d-->> %d\n", count, i);
        count++;
    }
}