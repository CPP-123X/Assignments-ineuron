

#include <stdio.h>

void main()
{
    int n;
    printf("Enter the number till where you want to get squares:-->>\n\n");
    scanf("%d", &n);
    printf("The cubes till %d are:-->>\n\n", n);
    int sum_cubes = 0;
    int i=1;
    while(i<=n)
    {
        printf("Cube of %d ---> %d\n",i,(i*i*i));
        sum_cubes=sum_cubes+(i*i*i);
        i++;
    }
    printf("\nThe sum of cubes till %d is %d\n",n,sum_cubes);
}