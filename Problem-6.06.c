

#include <stdio.h>

void main()
{
    int n;
    printf("Enter a number whose factorial you want:-->>\n\n");
    scanf("%d", &n);
    int i = n;
    int factorial = 1;
    while (i >= 1)
    {
        if (i != 1)
        {
            printf("%d X ", i);
            factorial=factorial*i;
            i--;
        }
        else
        {
            printf("%d",i);
            factorial=factorial*1;
            i--;
        }
    }
    printf("\n\nThe factorial of %d is %d\n",n,factorial);
}