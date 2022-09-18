


#include<stdio.h>

void main()
{
    int n;
    int sum_odd=0;
    printf("Enter the number till where you want to get the sum:-->>\n\n");
    scanf("%d",&n);
    printf("The odd numbers till %d is:-->>\n\n",n);
    for(int i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            printf("%d\n",i);
            sum_odd=sum_odd+i;
        }
    }
    printf("The total sum is %d\n",sum_odd);
}