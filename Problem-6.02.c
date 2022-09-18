

#include<stdio.h>

void main()
{
    int n;
    int sum=0;
    printf("Enter the Number till where you want to get the sum:-->>\n\n");
    scanf("%d",&n);
    printf("The even numbers till %d is:-->>\n",n);
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            printf("%d\n",i);
           sum=sum+i;
        }
    }
    printf("\n\n%d",sum);
}