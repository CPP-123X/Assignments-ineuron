

#include <stdio.h>

void main()
{
    int n;
    printf("Enter a Number to be Reversed:-->>\n\n");
    scanf("%d", &n);
    int temp = n;
    int r = 0, y = 0;
    while (n > 0)
    {
        r = n % 10;
        y = y * 10 + r;
        n = n / 10;
    }
    printf("The Reverse of %d is %d\n", temp, y);
}