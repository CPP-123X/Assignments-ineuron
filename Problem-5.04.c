


#include<stdio.h>

void main()
{
    int n;
    printf("Enter how many odd natural numbers you want:-->>\n\n");
    scanf("%d",&n);
    int i=1;
    printf("The first %d odd natural numbers are:-->> \n\n",n);
    while(i<=(n*2))
    {
        printf("%d\n",i);
        i=i+2;
    }
}