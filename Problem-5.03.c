

#include <stdio.h>

void main()
{
    int n;
    printf("Enter how many natural numbers you want to get printed:-->>\n\n");
    scanf("%d", &n);
    printf("The first %d natural numbers in reverse order are:-->>\n\n", n);
    int i=1;
    while(i<=n)
    {
        printf("%d\n",n);
        n=n-i;
    }
}