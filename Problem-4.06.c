



#include <stdio.h>

void main()
{
    printf("The first 10 even Natural Numbers are:-->> \n");
    int count=1;
    for (int i = 2; i <= 20; i = i + 2)
    {
        printf("Even Number %d-->> %d\n", count, i);
        count++;
    }
}