


#include<stdio.h>

void main()
{
    int n;
    printf("Enter a number to be checked\n\n");
    scanf("%d",&n);
    int count_factors=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count_factors++;
        }
    }
    printf("The number of factors of %d is %d\n",n,count_factors);
    if(count_factors==2)
    {
        printf("The number %d is prime number\n\n",n);
    }
    else if(n==1)
    {
        printf("The  number 1 is neither prime nor composite\n\n");
    }
    else if(count_factors!=2)
    {
        printf("The number %d is composite\n\n",n);
    }
}