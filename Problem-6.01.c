

#include <stdio.h>

void main()
{
    int n;
    printf("Enter the last natural number till where you want to get the sum:-->>\n");
    scanf("%d", &n);
    printf("The sum of first %d natural numbers is:-->>\n\n",n);
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        printf("%d\n",i);
        sum=sum+(i);
    }
    printf("The sum is %d\n",sum);
}