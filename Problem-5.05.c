

#include<stdio.h>

void main()
{
    int n;
    printf("Enter how many odd natural numbers you want in reverse order:-->> \n");
    scanf("%d",&n);
    printf("The first %d odd natural numbers in reverse order are:-->> \n\n",n);
    int i=0;
    for(int i=(n*2);i>=1;i--)
    {
        if(i%2!=0)
        {
            printf("%d\n",i);
        }
    }
}