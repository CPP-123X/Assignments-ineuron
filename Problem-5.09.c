

#include <stdio.h>

void main()
{
    int n;
    printf("Enter how many cubes you want to print:-->> \n\n");
    scanf("%d", &n);
    printf("The cubes till %d are:-->>\n", n);
    for (int i = 1; i <= n; i++)
    {
        printf("Cube of %d --->> %d\n", i, (i * i * i));
    }
}