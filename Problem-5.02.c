


#include<stdio.h>

void main()
{
    int n;
    printf("Enter how many natural numbers you want to get printed:-->>\n\n");
    scanf("%d",&n);
    printf("The first %d natural numbers are:-->>\n\n",n);
    for(int i=1;i<=n;i++)
    {
        printf("%d\n",i);
    }
}