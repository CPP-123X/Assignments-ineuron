


#include<stdio.h>

void main()
{
    int n;
    printf("Enter the number till where you want to get squares:-->>\n\n");
    scanf("%d",&n);
    printf("The squares till %d are:-->>\n\n",n);
    int sum_squares=0;
    for(int i=1;i<=n;i++)
    {
        printf("Square of %d ---> %d\n",i,(i*i));
        sum_squares=sum_squares+(i*i);
    }
    printf("The sum of squares is %d -->\n",sum_squares);
}