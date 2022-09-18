

#include <stdio.h>

void main()
{
    int n;
    printf("Enter the number whose digits you want to count:-->>\n\n");
    scanf("%d", &n);
    int temp = n;
    // int i=n;
    int count_digits = 0;
    while (n > 0)
    {
        //    i=i%10;
        count_digits++;
        n = n / 10;
    }
    if (n == 0 && temp == 0)
    {
        printf("The number of digits is %d\n", 1);
    }
    else if(temp!=0)
    {
        printf("The number of digits in %d is %d", temp, count_digits);
    }
}